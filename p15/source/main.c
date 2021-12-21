#include<stdio.h>
#include<stdlib.h>

	int main(void)
{
	FILE*fptr1, *fptr2;
	char ch;
	int count = 0;
	fopen_s(&fptr1, "D:/c_code/20211223homework/p15/welcome.txt", "r");
	fopen_s(&fptr2, "D:/c_code/20211223homework/p15/output.txt", "w");
	if ((fptr1 != NULL) && (fptr2 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
		{
			putc(ch, fptr2);
			count++;
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("檔案拷貝完成!!\n");
	}
	else
	{
		printf("檔案開啟失敗!!\n");
	}
	system("pause");
	return 0;
}