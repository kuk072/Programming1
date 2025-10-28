#include "10_Math.h"



void test()
{
	double test = PI;
	printf("테스트 파이 값 : %lf\n", PI);
}

// static을 지역변수(함수 안에)로 선언하면 어떤 일이 발생하는가?
// 스택 영역과 별개로 데이터가 저장이 됩니다. 
// 프로그램이 시작할 때 데이터가 저장이 됩니다.
// 지역 변수에 static을 선언하는 이유는 무엇일까? -> 함수 안에서만 정적으로 사용하겠다.

void test2()
{
	static int number = 1;
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		number += i;     // number = number + i 와 같다.
	}
	result = number;
}

void CalculateCircleArea()
{
	//const double pi = 3.14;       //이 값은 변경하지 마세요!!!!!!!!!!!!!!!!!!!!!!!!!!!

	double radius;
	printf("넓이를 구하고 싶은 원의 반지름의 길이는? : ");
	scanf("%lf", &radius);
	double CircleArea = PI * radius * radius;
	printf("원의 넓이 : %lf\n", CircleArea);
	// 원의 넓이가 2, 3, 4, 5, 6, ... 하고 싶음

}

void CalculateCircleDiameter()
{
	//const double pi = 3.14;      //이 값은 변경하지 마세요!!!!!!!!!!!!!!!!!!!!!!!!!!!

	double radius;
	printf("지름을 구하고 싶은 원의 반지름의 길이는? : ");
	scanf("%lf", &radius);
	double CircleDiameter = 2 * PI * radius;
	printf("원의 넓이 : %lf\n", CircleDiameter);
}