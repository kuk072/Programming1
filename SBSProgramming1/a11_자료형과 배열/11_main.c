#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// � ���� ������ �Ǵ°�?
// ���� ���, ���ο� ��� �Ѵ� ���.
// obsolete : ���̻� ���� �������� ������ ���ϰڴ�.
// �� �ڵ带 ����ϸ� ��� ��, �̰� ���� ���� ������ ���� ���ο� ������.

// �ݺ���

int main()
{
	// int a=0, b=0, c=0, d=0, e=0; �̶� ���� ����
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	// int a0, a1, ...
	int numArray[] = { 0,1,2,3 };
	printf("�� : %d\n", numArray[0]);


	// ex) ���Ͱ� 100���� �����Ѵ�.
	int numArray2[100];

	for (int i = 0; i < 100; i++) {
		a++;
	}

	char name[10];

	scanf("%s", name);   // name�� �ּ�
	printf("%s\n", name);

	if (name == "����")
	{
		printf("����\n");
	}
	else {
		printf("�ٸ���\n");
	}

	// name "���ͷ�����" �ּҰ� �ٸ���. ����Ǵ� ������ �ٸ��� ����.
	// ���ڿ��� �� �Լ��� ������. ������ �� �ְ� ����.

	// name ���� ����ִ� ������ ����. '��' '��' '\0' -> ���� �˷��ִ� �Լ�     bool IsStrCompare

	// �� ���� ���ڿ��� ���� ���ϴ� ���? -> strcmp

	if (strcmp("����", name) == 0 )
	{
		printf("����.\n");
	}
	else
	{
		printf("�ٸ���.\n");
	}
}