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
			"|   성          적          표 |\n"
			"|   번호 : %d  이름  :    %s   |\n"
			"|---------------------------|\n"
			"| 국어 점수 : %d            |\n"
			"|---------------------------|\n"
			"| 국어 점수 : %d            |\n"
			"|---------------------------|\n"
			"| 국어 점수 : %d            |\n"
			"|---------------------------|\n", num, name, grade[0], grade[1], grade[2]);
	}


	fclose(wfp);
	fclose(fp);
	_getch();
	return 0;
}