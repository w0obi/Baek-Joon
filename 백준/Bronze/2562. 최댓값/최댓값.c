#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Array[11] = { 0, };
int main() {
    int i, Max = 0, Max_n;

    for (i = 1; i < 10; i++) {
        scanf("%d", &Array[i]);
        if (Array[i] > Max) {
            Max = Array[i];
            Max_n = i;
        }
    }
    printf("%d\n%d", Max, Max_n);
    return 0;
}