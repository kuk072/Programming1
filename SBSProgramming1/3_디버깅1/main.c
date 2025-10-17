/*
*  날짜 : 2025-10-17
*  학습목표 : 디버깅 도구를 사용해보기
*/

#include <stdio.h> // 코드를 작성할 때 표준 입출력 헤더
                   // C언어로 콘솔창에 글자를 출력하게 하려면 어떤 헤더를 추가해야하나요?

void Example()
{
	printf("안뇽\n");
}

int main() 
{
	printf("3강 시작!\n");

	Example();

	int num1;
	num1 = 10;

	int num2 = num1 * (1 + 10);
	num1 = num2;  // 110

	// %d printf num1의 값을 생성
	printf("num1의 값 : %d\n", num1);

	/////// 정수

	// 자료형 = 메모리의 크기 + 자료의 정보
	// char : -128 ~ 127 정수


	int num3 = 200;
	char charMaxValue = 127;        // 7f
	char num4 = 200;                // 그래서 어케 고침?

	// 아트 - 프로그래밍 - 기획
	// 메모리 높아지면 그래픽이 더 뛰어나짐



	printf("num3의 값 : %d\n", num3);
	printf("num4의 값 : %d\n", num4);


	short num5 = 200;
	long num6 = 200;
	long long num7 = 200;

	printf("num5의 값 : %d\n", num5);

	// 리그오브레전드 공식. 

	// 이차 함수를 공식으로 사용하는 하나의 예제
	// 롤이 아니어도 괜찮으니 게임에서 사용할 수 있는 예제 고민

	// step 1 ~ 10
	// Result
	// printf

	/*
	* tft 레벨 별 원하는 기물 확률
	*/
	
	int probability;
	int level;

	level = 10;
	
	if (level < 5) {
		probability = -(level - 4) * (level - 4) + 16;
		printf("원하는 기물이 나올 확률 = %d", probability);
	}
	if (level > 4 && level < 9) {
		probability = 16;
		printf("원하는 기물이 나올 확률 = %d", probability);
	}
	if (level > 8) {
		probability = 7*(level - 8)*(level - 8) + 16;
		printf("원하는 기물이 나올 확률 = %d", probability);
	}
	

	/*
	* 게임에서 구현하고 싶은 기능을 만들어 보기. USING AI
	* C언어를 이용해서 투사체의 포물선 운동을 표현하는 코드를 만들어줘.
	* 예상 결과값을 추측하기 힘들다. 중단점을 건 다음에 어떻게 코드가 돌아가는지 살펴보기.
	*/




}

// 중단점 = 내가 원하는 멈추고 싶은 지점 이라고 볼 수있네
// 디버깅 = 버그 잡는 행위


