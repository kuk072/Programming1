#include <stdio.h>
#include "Math.h"

void Add(int num1, int num2)
{
	int result1 = num1 + num2;
	printf("�� ���� ���� �� : %d + %d = %d\n", num1, num2, result1);
}

void Minus(int num3, int num4)
{
	int result2 = num3 - num4;
	printf("�� ���� �� �� : %d - %d = %d\n", num3, num4, result2);
}

void Multiply(int num5, int num6)
{
	int result3 = num5 * num6;
	printf("�� ���� ���� �� : %d x %d = %d\n", num5, num6, result3);
}

void Divide(int num7, int num8)
{
	int result4 = num7 / num8;
	printf("�� ���� ���� �� : %d / %d = %d\n", num7, num8, result4);
}