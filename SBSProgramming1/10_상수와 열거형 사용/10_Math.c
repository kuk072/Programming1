#include "10_Math.h"



void test()
{
	double test = PI;
	printf("�׽�Ʈ ���� �� : %lf\n", PI);
}

// static�� ��������(�Լ� �ȿ�)�� �����ϸ� � ���� �߻��ϴ°�?
// ���� ������ ������ �����Ͱ� ������ �˴ϴ�. 
// ���α׷��� ������ �� �����Ͱ� ������ �˴ϴ�.
// ���� ������ static�� �����ϴ� ������ �����ϱ�? -> �Լ� �ȿ����� �������� ����ϰڴ�.

void test2()
{
	static int number = 1;
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		number += i;     // number = number + i �� ����.
	}
	result = number;
}

void CalculateCircleArea()
{
	//const double pi = 3.14;       //�� ���� �������� ������!!!!!!!!!!!!!!!!!!!!!!!!!!!

	double radius;
	printf("���̸� ���ϰ� ���� ���� �������� ���̴�? : ");
	scanf("%lf", &radius);
	double CircleArea = PI * radius * radius;
	printf("���� ���� : %lf\n", CircleArea);
	// ���� ���̰� 2, 3, 4, 5, 6, ... �ϰ� ����

}

void CalculateCircleDiameter()
{
	//const double pi = 3.14;      //�� ���� �������� ������!!!!!!!!!!!!!!!!!!!!!!!!!!!

	double radius;
	printf("������ ���ϰ� ���� ���� �������� ���̴�? : ");
	scanf("%lf", &radius);
	double CircleDiameter = 2 * PI * radius;
	printf("���� ���� : %lf\n", CircleDiameter);
}