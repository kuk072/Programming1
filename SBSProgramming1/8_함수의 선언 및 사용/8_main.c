/*
* 2025-10-24
* 함수란 무엇일까? : 처리 절차를 거치면 어떤 결과값이 반환되는 기능
* 함수를 왜 쓸까?  : 아래의 예시를 보자.
*/


// 메인 함수.
// 프로그램의 시작과 끝을 표현하는 기능을 하고 있음.
#include <stdio.h>
#include "Math.h"



int main()
{
	int num1 = 1;
	int num2 = 2;

	Add(num1, num2);
	
	Add(3, 5);

	int selectNumber = 0;
	int remainPoint = 0;
	int STR = 0;
	int DEX = 0;
	int INT = 0;
	int LUK = 0;
	int spendPoint = 0;
	scanf_s("%d", &selectNumber);
	if (selectNumber == 0)
	{
		scanf_s("%d", &spendPoint);

		remainPoint = remainPoint - spendPoint;
		STR = STR + spendPoint;
	}
}