#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    int positions[26];
    int i;

    scanf("%s", S);

    // 모든 알파벳의 위치를 -1로 초기화
    for (i = 0; i < 26; i++) {
        positions[i] = -1;
    }

    // 단어 S를 순회하면서 첫 번째 등장 위치를 기록
    for (i = 0; i < strlen(S); i++) {
        int index = S[i] - 'a';
        if (positions[index] == -1) {
            positions[index] = i;
        }
    }

    // 결과 출력
    for (i = 0; i < 26; i++) {
        printf("%d ", positions[i]);
    }

    return 0;
}
