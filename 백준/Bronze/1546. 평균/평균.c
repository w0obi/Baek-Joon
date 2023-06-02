#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 학생은 성적을 조작하려한다. 조작된 평균을 구하라. */

int main(void) 
{
	int Count = 0, Max = 0;
	float Sum =  0.0;
	int Score[1000] = { 0, };

	scanf("%d", &Count);
	for (int i = 0; i < Count; i++)
	{
		scanf("%d", &Score[i]);
	}

	for (int i = 0; i < Count; i++)
	{
		if (Max < Score[i])
		{
			Max = Score[i];
		}
	}

	float Edit = 0;
	for (int i = 0; i < Count; i++)
	{
		Edit = ((float)Score[i] / Max) * 100;
		Sum += Edit;
	}
	//if (INFINITY == (Sum / Count))
	//	printf("계산하기에는 인수가 너무 큽니다.\n");

	printf("%.2f", Sum / Count);
}