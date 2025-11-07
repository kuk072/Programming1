#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("1. 포인터 복습\n");

	// 포인터 변수를 선언해보세요. 정수형(int)
	// 정수 값의 주소를 저장해보세요. 주소연산자 사용
	// 포인터 변수로부터 값을 가져와서 출력해보세요. 역참조 연산

	int num1 = 0;
	int* num1Ptr = &num1;  // 정수형 4바이트 주소를 저장하는 변수.


	printf("포인터 변수의 역참조 값 : %d\n", *num1Ptr);

	// 주소에 대한 이해
	// 데이터를 저장한다
	// 주소의 시작점을 기준으로 자료형에 정의된 범위만큼 정해진 방식으로 읽는다.

	//int * : 주소 ? 시작 주소. 4 바이트를 읽어라.



	printf("num1Ptr의 값 :%p\n", num1Ptr);

	double num2 = 0.2;
	double* num2Ptr = &num2;

	num1Ptr = num2Ptr;

	// num3 = 10;   // 정의되어 있지 않았다. 

	printf("2. 포인터와 배열\n");

	int numarr[5] = { 0, };  // 시작 주소로부터 4바이트를 읽겠다.

	int num1, num2, num3, num4, num5;


}