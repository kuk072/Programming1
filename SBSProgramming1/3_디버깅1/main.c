/*
*  ��¥ : 2025-10-17
*  �н���ǥ : ����� ������ ����غ���
*/

#include <stdio.h> // �ڵ带 �ۼ��� �� ǥ�� ����� ���
                   // C���� �ܼ�â�� ���ڸ� ����ϰ� �Ϸ��� � ����� �߰��ؾ��ϳ���?

void Example()
{
	printf("�ȴ�\n");
}

int main() 
{
	printf("3�� ����!\n");

	Example();

	int num1;
	num1 = 10;

	int num2 = num1 * (1 + 10);
	num1 = num2;  // 110

	// %d printf num1�� ���� ����
	printf("num1�� �� : %d\n", num1);

	/////// ����

	// �ڷ��� = �޸��� ũ�� + �ڷ��� ����
	// char : -128 ~ 127 ����


	int num3 = 200;
	char charMaxValue = 127;        // 7f
	char num4 = 200;                // �׷��� ���� ��ħ?

	// ��Ʈ - ���α׷��� - ��ȹ
	// �޸� �������� �׷����� �� �پ��



	printf("num3�� �� : %d\n", num3);
	printf("num4�� �� : %d\n", num4);


	short num5 = 200;
	long num6 = 200;
	long long num7 = 200;

	printf("num5�� �� : %d\n", num5);

	// ���׿��극���� ����. 

	// ���� �Լ��� �������� ����ϴ� �ϳ��� ����
	// ���� �ƴϾ �������� ���ӿ��� ����� �� �ִ� ���� ���

	// step 1 ~ 10
	// Result
	// printf

	/*
	* tft ���� �� ���ϴ� �⹰ Ȯ��
	*/
	
	int probability;
	int level;

	level = 10;
	
	if (level < 5) {
		probability = -(level - 4) * (level - 4) + 16;
		printf("���ϴ� �⹰�� ���� Ȯ�� = %d", probability);
	}
	if (level > 4 && level < 9) {
		probability = 16;
		printf("���ϴ� �⹰�� ���� Ȯ�� = %d", probability);
	}
	if (level > 8) {
		probability = 7*(level - 8)*(level - 8) + 16;
		printf("���ϴ� �⹰�� ���� Ȯ�� = %d", probability);
	}
	

	/*
	* ���ӿ��� �����ϰ� ���� ����� ����� ����. USING AI
	* C�� �̿��ؼ� ����ü�� ������ ��� ǥ���ϴ� �ڵ带 �������.
	* ���� ������� �����ϱ� �����. �ߴ����� �� ������ ��� �ڵ尡 ���ư����� ���캸��.
	*/




}

// �ߴ��� = ���� ���ϴ� ���߰� ���� ���� �̶�� �� ���ֳ�
// ����� = ���� ��� ����


