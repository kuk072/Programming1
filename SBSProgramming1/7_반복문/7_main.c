/*
*  날짜 : 2025-10-23
*  학습목표 : for반복문과 while반복문의 문법 이해하기
*  실습목표 : 지난 시간에 구현했던 코드를 반복문으로 표현하기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//scanf (C언어에서 사용하는 방식)
	//C++에서 Unreal에서 다 다르니깐 염두하시오
	int A = 0;
	printf("숫자 작성 ㄱㄱ :");
	scanf("%d", &A);
	printf("%d", A);

	// 1. for반복문

	for (int i = 97; i < 123; i++)
	{
		printf("%c의 아스키코드 = %d", i, i);
		
	}

	// 0 ~ 9 [ 10 ]
	// 변수를 사용해보자
	// 반복하는 개수도 변수로 가능하고 반복문 내에서도 변수를 활용가능
	printf("\n");

	// 2. while반복문

	int num1 = 97;
	int j = 1;

	while (j != 10)
	{
		printf("%c의 아스키코드 = %d", num1 + j, j);
		
		j++;
	}

	printf("\n");
	srand(time(NULL));
	int randomValue = rand();
	printf("%d", randomValue);

}