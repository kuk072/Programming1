/*
* 2025-10-24
* �Լ��� �����ϱ�? : ó�� ������ ��ġ�� � ������� ��ȯ�Ǵ� ���
* �Լ��� �� ����?  : �Ʒ��� ���ø� ����.
*/


// ���� �Լ�.
// ���α׷��� ���۰� ���� ǥ���ϴ� ����� �ϰ� ����.
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