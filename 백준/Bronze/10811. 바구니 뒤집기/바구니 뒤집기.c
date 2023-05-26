#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int Array[100] = { 0, };
	int Basket = 0, move = 0, first = 0, last = 0, i = 0, j = 0, temp = 0;
	int Length = sizeof Array / sizeof (int);

	scanf("%d%d", &Basket, &move);		 //바구니의 개수와 바구니의 순서를 변경할 횟수 입력

	for (i = 0; i < Basket; i++)		 //바구니 개수만큼 배열을 할당
		Array[i] = i + 1;

	for (i = 0; i < move; i++) {		 // move만큼 반복
		scanf("%d%d", &first, &last);	 //역순으로 정렬할 바구니의 범위를 입력
		for (j = 0; j < (last - first + 1) / 2; j++) {//바구니의 순서를 역순으로 정렬
			temp = Array[first + j - 1];
			Array[first + j - 1] = Array[last - j - 1];
			Array[last - j - 1] = temp;
		}
	}	

	for (i = 0; i < Basket; i++)		 // 결과를 출력
		printf("%d ", Array[i]);

	return 0;
}