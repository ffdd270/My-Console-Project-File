#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(int argc, char * argv)
{
	FILE * fp;
	FILE * wfp;
	char str[256];
	int num;
	char name[30];
	int grade[3];
	fp = fopen("c:\input.txt", "rt+");
	wfp = fopen("c:\\output.txt", "wt+");
	while (!feof(fp))
	{
		fscanf(fp, "%d %s %d %d %d", &num, name, &grade[0], &grade[1], &grade[2]);
		fprintf(wfp, "--------------------------------\n"
			"|   ��          ��          ǥ |\n"
			"|   ��ȣ : %d  �̸�  :    %s   |\n"
			"|---------------------------|\n"
			"| ���� ���� : %d            |\n"
			"|---------------------------|\n"
			"| ���� ���� : %d            |\n"
			"|---------------------------|\n"
			"| ���� ���� : %d            |\n"
			"|---------------------------|\n", num, name, grade[0], grade[1], grade[2]);
	}


	fclose(wfp);
	fclose(fp);
	_getch();
	return 0;
}