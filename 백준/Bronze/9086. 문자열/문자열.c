#include <stdio.h>

int main() {

    int T;

    scanf("%d", &T);

    getchar(); // 개행 문자 제거

    while (T--) {

        char str[1001];

        fgets(str, sizeof(str), stdin);

        char first = str[0];

        char last = str[strlen(str) - 2];

        printf("%c%c\n", first, last);

    }

    return 0;

}

