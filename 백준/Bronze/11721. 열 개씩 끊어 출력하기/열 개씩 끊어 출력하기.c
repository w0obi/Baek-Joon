#include <stdio.h>
#include <string.h>

#define MAX_LEN 101 // 단어의 최대 길이

int main() {
    char word[MAX_LEN];
    scanf("%s", word);

    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        printf("%c", word[i]);

        // 10개마다 줄바꿈
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    printf("\n"); // 마지막 줄바꿈

    return 0;
}
