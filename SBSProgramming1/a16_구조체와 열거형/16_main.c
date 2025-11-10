#include "SAMPLE.h"

/*
*  열거형
*  - 상수 : 값을 고정시키겠다 / 바꾸려고 할 때 경고를 주겠다.
*  - const 변수 선언;
*  - #define Pi 3.14 이렇게도 가능
*/
#define MAPSIZE 10
// 열거형이란? : 0.1.2.3.4.5.6...

typedef enum {   // 무명 방식
	score,
	coin,
	health,
	undefined =100
}GameText;  // GameText가 type이 됐음

// 열거형을 간결하게 사용하는 방법 typedef
// 조건문과 열거형을 같이 사용하는 패턴

/*
*  구조체
*/


int main()
{
	//Text = score;
	//enum GameText Text = score;

	// 상수는 값을 변경하지 못하게 하는 방법이다.
	const int size = 5;
	printf("맵의 크기 : %d\n", MAPSIZE);
	printf("맵의 크기 : %d\n", size);

	const char* Text[3] = { "점수", "동전", "체력" };

	printf("%s\n", Text[score]);  // 숫자를 어떠한 의미를 가지도록 약속을 했지만 시간이 지날 수록 까먹을꺼임

	GameText newGameText = health;

	//if (newGameText == score)
	//{
	//	// 점수인 경우에 무엇을 해라.
	//	// score를 화면에 출력하라.
	//	printf("점수 출력하는 예제입니다.");
	//}
	//else if (newGameText == health)
	//{
	//	printf("체력 출력하는 예제입니다.");
	//}

	GameText GameText = score;;

	switch (GameText)
	{
		case score: printf("점수입니다.\n");
			break;
		case coin:
			printf("코인입니다.\n");
			break;
		default: GameText = undefined;
			break;

	}

	JOB myJOB = 정의되지않음;

	Selectjob();
	
}