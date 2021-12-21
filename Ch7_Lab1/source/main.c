#include <stdio.h>
#include <stdlib.h>

typedef struct _student {
	char name[5];
	int chinese;
	int english;
	int math;
	int sum;
	float avg;
}student;

int main(void)
{
	student date[5];
	FILE *stream1;
	FILE *stream2;

	stream1 = fopen("D://c_code/Ch7_Lab1/gradedata.txt", "r");
	stream2 = fopen("D://c_code/Ch7_Lab1/gradeoutput.txt", "w");

	if (stream1 == NULL || stream2 == NULL) {
		printf("檔案開啟失敗");
	}
	else {
		fprintf(stream2, "姓名\t國文\t英文\t數學\t綜合\t平均\n");
		for (int i = 0; i < 5; i++)
		{
			fscanf(stream1, "%s", date[i].name);
			if (i == 2) {
				fscanf(stream1, "\t\t%d", &date[i].chinese);
			}
			else {
				fscanf(stream1, "\t%d", &date[i].chinese);
			}
			fscanf(stream1, "\t%d", &date[i].english);
			fscanf(stream1, "\t%d", &date[i].math);

			date[i].sum = date[i].chinese + date[i].english + date[i].math;
			date[i].avg = date[i].sum / 3.0;
			fprintf(stream2, "%s\t%d\t%d\t%d\t%d\t%.2f\n", date[i].name, date[i].chinese, date[i].english, date[i].math, date[i].sum, date[i].avg);
		}
		fclose(stream1);
		fclose(stream2);
	}
	system("pause");
	return 0;
}