#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char input[101];
    while (scanf("%[^\n]%*c", input) == 1) {
        printf("%s\n", input);
    }
    return 0;
}
