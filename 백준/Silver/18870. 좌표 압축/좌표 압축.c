#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    int index;
} Point;

int compare(const void* a, const void* b) {
    return ((Point*)a)->value - ((Point*)b)->value;
}

int main() {
    int N;
    scanf("%d", &N);

    Point* points = (Point*)malloc((N + 1) * sizeof(Point));
    for (int i = 0; i < N; i++) { // 배열 인덱스를 0부터 시작하도록 수정
        scanf("%d", &points[i].value);
        points[i].index = i;
    }

    qsort(points, N, sizeof(Point), compare); // 정렬할 때도 인덱스 0부터 사용

    int* compressed = (int*)malloc((N + 1) * sizeof(int));
    int count = 0;
    for (int i = 0; i < N; i++) { // 배열 인덱스를 0부터 시작하도록 수정
        if (i > 0 && points[i].value != points[i - 1].value) {
            count++;
        }
        compressed[points[i].index] = count;
    }

    for (int i = 0; i < N; i++) { // 배열 인덱스를 0부터 시작하도록 수정
        printf("%d ", compressed[i]);
    }
    printf("\n");

    free(points);
    free(compressed);

    return 0;
}
