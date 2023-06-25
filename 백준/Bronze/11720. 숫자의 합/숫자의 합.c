#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int Count, Sum = 0;
	int Number = 0;
	scanf("%d", &Count);

	for (int i = 0; i < Count; i++)
	{
		scanf("%1d", &Number);
		Sum += Number;
	}

	printf("%d", Sum);

	return 0;
}