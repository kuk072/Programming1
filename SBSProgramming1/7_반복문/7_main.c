/*
*  ��¥ : 2025-10-23
*  �н���ǥ : for�ݺ����� while�ݺ����� ���� �����ϱ�
*  �ǽ���ǥ : ���� �ð��� �����ߴ� �ڵ带 �ݺ������� ǥ���ϱ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//scanf (C���� ����ϴ� ���)
	//C++���� Unreal���� �� �ٸ��ϱ� �����Ͻÿ�
	int A = 0;
	printf("���� �ۼ� ���� :");
	scanf("%d", &A);
	printf("%d", A);

	// 1. for�ݺ���

	for (int i = 97; i < 123; i++)
	{
		printf("%c�� �ƽ�Ű�ڵ� = %d", i, i);
		
	}

	// 0 ~ 9 [ 10 ]
	// ������ ����غ���
	// �ݺ��ϴ� ������ ������ �����ϰ� �ݺ��� �������� ������ Ȱ�밡��
	printf("\n");

	// 2. while�ݺ���

	int num1 = 97;
	int j = 1;

	while (j != 10)
	{
		printf("%c�� �ƽ�Ű�ڵ� = %d", num1 + j, j);
		
		j++;
	}

	printf("\n");
	srand(time(NULL));
	int randomValue = rand();
	printf("%d", randomValue);

}