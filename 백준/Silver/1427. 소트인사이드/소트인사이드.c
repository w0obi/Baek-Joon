#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[], int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        int key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int digits[10];
    int i = 0;

    while (N > 0) {
        digits[i] = N % 10;
        N /= 10;
        i++;
    }

    insertionSort(digits, i);

    for (int j = 0; j < i; j++) {
        printf("%d", digits[j]);
    }
    printf("\n");

    return 0;
}
