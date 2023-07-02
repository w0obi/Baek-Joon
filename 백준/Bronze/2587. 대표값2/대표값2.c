#include <stdio.h>

// 함수 선언
void sort(int arr[], int n);
int median(int arr[], int n);

int main() {
    int numbers[5];
    int sum = 0;
    
    // 5개의 자연수 입력 받기
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    // 평균 계산 및 출력
    int average = sum / 5;
    printf("%d\n", average);
    
    // 중앙값 계산 및 출력
    sort(numbers, 5);
    int median_value = median(numbers, 5);
    printf("%d\n", median_value);
    
    return 0;
}

// 배열 정렬 함수
void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // 두 수의 위치를 바꿈
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// 중앙값 계산 함수
int median(int arr[], int n) {
    if (n % 2 == 0) {
        return (arr[n/2 - 1] + arr[n/2]) / 2;
    } else {
        return arr[n/2];
    }
}
