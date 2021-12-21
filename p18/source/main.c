#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE*in, *out;
	int cnt;
	char str[100];
	
	fopen_s(&in, "D:/c_code/20211223homework/p18/welcome.txt", "r");
	fopen_s(&out,"D:/c_code/20211223homework/p18/output.txt", "w+");
	while (!feof(str))
	{
		cnt = fscanf_s(in, " %s", str,sizeof(str));
		if (cnt > 0)
		{
			fprintf(out, "%s\n", str);
		}
	}
	fclose(in);
	fclose(out);
	
	system("pause");
	return 0;
}