#include <stdio.h>

//recursiveCall
int fib(int n) {
    if (n==1 || n==2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

//dynamicProgramming
int FArr[];
int fibonacci(int n) {
    FArr[1] = 1;
    FArr[2] = 1;
    for (int i = 3; i <= n; i++) {
        FArr[i] = FArr[i-1] + FArr[i-2];
    }
    return FArr[n];
}

/*
- 실행 횟수를 구하는 기준 -
재귀호출 - 함수 호출 횟수
동적 프로그래밍 - 배열에 저장된 값 변경하는 횟수
*/
int main() {
    int Count;
    scanf("%d", &Count);
    
}
