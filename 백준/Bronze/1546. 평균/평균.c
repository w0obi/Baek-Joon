#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SUBJECTS 1000

int main()
{
    int N;
    scanf("%d", &N);

    if (N <= 0 || N > MAX_SUBJECTS)
    {
        printf("Invalid input for the number of subjects.\n");
        return 1;
    }

    int scores[MAX_SUBJECTS];
    int max_score = 0;

    // 점수 입력받고 최고 점수 구하기
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &scores[i]);
        if (scores[i] > max_score)
            max_score = scores[i];
    }

    float sum = 0.0;

    // 점수 조작하여 새로운 평균 계산
    for (int i = 0; i < N; i++)
    {
        float adjusted_score = (float)scores[i] / max_score * 100;
        sum += adjusted_score;
    }

    float average = sum / N;
    printf("%.2f\n", average);

    return 0;
}
