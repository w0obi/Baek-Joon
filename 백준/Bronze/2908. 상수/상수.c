#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int constant_A = reverseNumber(A);
    int constant_B = reverseNumber(B);

    if (constant_A > constant_B) {
        printf("%d\n", constant_A);
    } else {
        printf("%d\n", constant_B);
    }

    return 0;
}
