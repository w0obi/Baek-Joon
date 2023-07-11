#include <stdio.h>

int main() {
    int attendance[30] = {0,}; // 출석번호 배열 초기화
    int min_missing = 0, next_missing = 0; // 제출하지 않은 학생의 출석번호 중 가장 작은 것과 그 다음 출석번호를 저장할 변수
    
    // 출석번호 입력받기
    for (int i = 0; i < 28; i++) {
        int num;
        scanf("%d", &num);
        attendance[num-1] = 1; // 해당 출석번호의 학생이 제출했음을 표시
    }
    
    // 제출하지 않은 학생의 출석번호 중 가장 작은 것 찾기
    for (int i = 0; i < 30; i++) {
        if (attendance[i] == 0) {
            min_missing = i+1;
            break;
        }
    }
    
    // 그 다음 출석번호 찾기
    for (int i = min_missing; i < 30; i++) {
        if (attendance[i] == 0) {
            next_missing = i+1;
            break;
        }
    }
    
    // 결과 출력
    printf("%d\n%d", min_missing, next_missing);
    
    return 0;
}
