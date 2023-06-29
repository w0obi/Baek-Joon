#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	char Input[101];
	int countArr[26] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 
						 -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
						 -1, -1, -1, -1, -1, -1 };

	scanf("%s", &Input);
	for (int index = 0; index < strlen(Input); index++){
		if (countArr[Input[index] - 'a'] == -1)
			countArr[Input[index] - 'a'] = index;
		else continue;
	}
	for (int i = 0; i < 26; i++) { printf("%d ", countArr[i]); }
	return 0;
}
