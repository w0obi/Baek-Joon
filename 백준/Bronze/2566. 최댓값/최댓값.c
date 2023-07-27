#include <stdio.h>

int main() {
    int grid[9][9];
    int max_value = 0;
    int max_row = 0;
    int max_col = 0;

    // 9x9 그리드 입력 받기
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &grid[i][j]);

            // 최댓값인지 확인하고, 최댓값과 위치 저장
            if (grid[i][j] >= max_value) {
                max_value = grid[i][j];
                max_row = i + 1; // 인덱스는 0부터 시작하므로 1을 더해 줌
                max_col = j + 1;
            }
        }
    }

    // 결과 출력
    printf("%d\n", max_value);
    printf("%d %d", max_row, max_col);

    return 0;
}
