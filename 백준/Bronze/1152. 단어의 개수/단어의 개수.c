#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000001];
    fgets(sentence, sizeof(sentence), stdin);

    int wordCount = 0;
    int len = strlen(sentence);

    // 문자열의 시작과 끝에 공백이 있는 경우 제거
    while (len > 0 && (sentence[len - 1] == '\n' || sentence[len - 1] == ' ')) {
        sentence[len - 1] = '\0';
        len--;
    }

    char* token = strtok(sentence, " ");

    // 공백을 구분자로 사용하여 단어를 추출하고 개수를 세기
    while (token != NULL) {
        wordCount++;
        token = strtok(NULL, " ");
    }

    printf("%d\n", wordCount);

    return 0;
}
