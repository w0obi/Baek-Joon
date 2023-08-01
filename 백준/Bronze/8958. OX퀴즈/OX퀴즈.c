#include <stdio.h>
#include <string.h>

int main() {
    int num_test_cases;
    scanf("%d", &num_test_cases);

    while (num_test_cases--) {
        char quiz[80];
        scanf("%s", quiz);

        int score = 0; // 현재 문제까지의 점수
        int total_score = 0; // 전체 점수

        for (int i = 0; i < strlen(quiz); i++) {
            if (quiz[i] == 'O') {
                score++; // 정답이면 점수 증가
                total_score += score; // 전체 점수에 더함
            } else {
                score = 0; // 오답이면 점수 초기화
            }
        }

        printf("%d\n", total_score);
    }

    return 0;
}
