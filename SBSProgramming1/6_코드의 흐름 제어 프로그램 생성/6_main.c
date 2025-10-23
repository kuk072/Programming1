/*
*  날짜 : 2025-10-22
*  학습목표 : 미니 게임 직접 설계하고 코드를 작성해보는 것
*/

// 오늘은 미니게임 하나 만들어보자구요
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// (1) 가위 바위 보 게임을 한글로 표현해보기
// (2) 인원은? 일단 2명 - 유저, 컴퓨터 -
// (3) 유저는 가위 바위 보 중 하나를 선택해주세요.
// (4) 결과 : 컴퓨터가 무엇을 냈는가에 따라서 결과가 달라진다.



int main() {
    int user, computer;       // 유저에게 받는 정수, 랜덤으로 돌아갈 컴퓨터 정수
    int user2 = 0;            // 똑같은 걸 냈을 때를 감지하기 위한 변수
    int win = 0;              // 승수 감지
    int lose = 0;             // 패배수 감지
    int winMAX, loseMAX;      // 유저가 설정할 최대 승수, 최대 패배수


    // 최대 승수를 유저에게서 받아서 설정하기
    printf("당신이 원하는 최대 승수는? : ");
    scanf_s("%d", &winMAX);
    // 최대 패배수를 유저에게서 받아서 설정하기
    printf("당신이 용납하는 최대 패배수는? : ");
    scanf_s("%d", &loseMAX);

    // 난수 생성을 위한 시드 설정 (항상 다른 결과를 위해)
    srand((unsigned int)time(NULL));

    while (win != winMAX && lose != loseMAX) {
        printf("가위(0), 바위(1), 보(2) 중 하나를 입력하세요 연속으로 같은 것은 내지 못합니다. (종료: 9): ");
        scanf_s("%d", &user);

        // 게임 종료 조건
        if (user == 9) {
            printf("게임을 종료합니다.\n");
            break;
        }

        // 입력 유효성 검사
        if (user < 0 || user > 2) {
            printf("잘못된 입력입니다. 다시 입력하세요.\n");
            continue;
        }

        // 같은 걸 냈는지 검사
        if (user2 == user) {
            printf("같은 걸 입력했습니다. 다시 입력하세요.\n");
            continue;
        }

        // 컴퓨터의 선택 (0, 1, 2 중 하나)
        computer = rand() % 3;

        // 선택 결과 출력
        printf("당신의 선택: ");
        if (user == 0) printf("가위\n");
        else if (user == 1) printf("바위\n");
        else printf("보\n");

        printf("컴퓨터의 선택: ");
        if (computer == 0) printf("가위\n");
        else if (computer == 1) printf("바위\n");
        else printf("보\n");

        // 승패 판정
        if (user == computer) {
            printf("비겼습니다!\n\n");
        }
        else if ((user == 0 && computer == 2) || (user == 1 && computer == 0) || (user == 2 && computer == 1)) {
            printf("당신이 이겼습니다!\n\n");
            win++;
        }
        else {
            printf("당신이 졌습니다.\n\n");
            lose++;
        }

        // 이번에 유저가 낸 결과 저장
        user2 = user;
    }

    // 승리 연출
    if (win == winMAX)
    {
        printf("%d번이나 이겼으면 고마해라\n", win);
    }

    // 패배 연출
    if (lose == loseMAX)
    {
        printf("%d번이나 졌으면 때리쳐라\n", lose);

    }

    return 0;
}

/*
*  개발이력
*  가위 바위 보 게임
*  Version 1.0.0 : 가위 바위 보 결과를 출력하는 기능 구현
*  Version 1.0.1 : 유저의 입력 기능 구현 + 5번 이기면 승리연출 구현 + 연속으로 같은 걸 못 내게 변경
*  Version 1.0.2 : 유저가 원하는 최대 승수/최대 패배수 설정 가능
*/


