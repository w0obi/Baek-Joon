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

    Point* points = (Point*)malloc(N * sizeof(Point));
    for (int i = 0; i < N; i++) {
        scanf("%d", &points[i].value);
        points[i].index = i;
    }

    // 좌표를 오름차순으로 정렬
    qsort(points, N, sizeof(Point), compare);

    int* compressed = (int*)malloc(N * sizeof(int));
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (i > 0 && points[i].value != points[i - 1].value) {
            count++;
        }
        compressed[points[i].index] = count;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", compressed[i]);
    }
    printf("\n");

    free(points);
    free(compressed);

    return 0;
}
