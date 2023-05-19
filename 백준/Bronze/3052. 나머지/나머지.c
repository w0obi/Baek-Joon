#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* first, const void* second) { return *(int*)first - *(int*)second; }
int main() {
	
	int Input[10] = { 0, }; 
	int Output = 0;
	
	for (int i = 0; i < 10; i++) {
		scanf("%d", &Input[i]);
	}

	for (int i = 0; i < 10; i++) {
		Input[i] %= 42;
	}

	qsort(Input, 10, sizeof(int), compare);
	
	for (int i = 0; i < 10; i++) {
		if (Input[i] == Input[i + 1]) { continue; }
		else { Output++; }
	}

	printf("%d", Output);	// 서로 다른 값이 몇 개 있는지 출력
}