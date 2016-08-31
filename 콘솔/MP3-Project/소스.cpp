#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <fmod.h>
#include <io.h>
#include <string.h>

FMOD_SOUND ** g_arr_Sound;

FMOD_SYSTEM * g_System;
FMOD_SOUND * g_Sound;
int h_Fsys = 0; //�� ������� ���ĵǴ� �迭 �ڵ� �ý��ۿ�.
int h_Fsnd = 0;
int SongNumber = 0;


char ** g_SongName;
void Init()
{
	_finddata_t fd;
	long handle;
	int result = 1;
	handle = _findfirst(".\\*.mp3", &fd);

	//���� ���� Ȯ��
	if (handle ==  1)
	{
		printf("�� ���� \n");
		return;
	}

	while (result != -1)
	{
		printf("File : %s \n", fd.name);
		result = _findnext(handle, &fd);
		SongNumber++;
	}
	//��

	//�迭 �Ҵ�
	g_SongName = (char **)malloc(sizeof(char)* SongNumber);
	g_arr_Sound = (FMOD_SOUND **)malloc(sizeof(FMOD_SOUND *)* SongNumber);
	//��

	//FMOD�� ����
	handle = _findfirst(".\\*.mp3", &fd);
	int i = 0;       //�ӽ� ����� ����
	result = 0;		
	//FMOD �ý��� �ʱ�ȭ
	FMOD_System_Create(&g_System); 
	FMOD_System_Init(g_System, 32, FMOD_INIT_NORMAL, NULL);
	//��
	while (result != -1)
	{
		g_SongName[i] = (char *)malloc(strlen(fd.name));
		strcpy(g_SongName[i], fd.name);
		result = _findnext(handle, &fd);
		i++;
	}
}

void Release()
{
	for (int i = 0; i < SongNumber; i++)
	{
		FMOD_Sound_Release(g_arr_Sound[i]);
		free(g_arr_Sound[i]);
	}

	FMOD_System_Close(g_System);
	FMOD_System_Release(g_System);
}

void Play(int SongNum)
{
	static int OldMusic = -1; //������, -1�̸� ���� �� ������ ������ ��Ȳ
	int MyMusic = SongNum; //���� ����.

	if ((OldMusic != -1) && (OldMusic != MyMusic))
	{
		FMOD_Sound_Release(g_arr_Sound[OldMusic]);
	}
	
	if (OldMusic != MyMusic)
	{
		FMOD_System_CreateSound(g_System, g_SongName[SongNum], FMOD_LOOP_NORMAL, NULL, &g_arr_Sound[SongNum]);
	}

	OldMusic = MyMusic;
}

int main()
{
	int nKey;
	FMOD_CHANNEL * channel = NULL;
	float volume = 0.5f;
	FMOD_BOOL IsPlaying;
	int SongNum = 0;
	Init();

	while (1)
	{

		if (_kbhit())
		{
			nKey = getch();
			if (nKey == 'q')
				break;

			switch (nKey)
			{
			case 'e':
				FMOD_Channel_Stop(channel);
				SongNum++;
				break;
			case 'd':
				FMOD_Channel_Stop(channel);
				SongNum--;
				break;
			case 'p':
				Play(SongNum);
				FMOD_System_PlaySound(g_System, FMOD_CHANNEL_FREE, g_arr_Sound[SongNum], 0, &channel);
				break;
			case 's':
				FMOD_Channel_Stop(channel);
				break;
			case 'x':
				if (volume > -0.01f)
					volume = 0.0f;
				volume -= 0.1f;
				FMOD_Channel_SetVolume(channel, volume);
				break;
			case 'u':
				volume += 0.1f;
				if (volume > 1.0f)
					volume = 1.0f;
				FMOD_Channel_SetVolume(channel, volume);
				break;
			}
			printf("Number : %d ", SongNum);
		}
		FMOD_Channel_IsPlaying(channel, &IsPlaying);
		if (IsPlaying == 1)
			FMOD_System_Update(g_System);
	}
	Release();
	return 0;
}