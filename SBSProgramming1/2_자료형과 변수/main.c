/*
*  ��¥ : 2025-10-16
*  �н���ǥ : �ڷ����� ����
*  �ǽ���ǥ : ���� ������ �м��ؼ� �ڷ����� �����Ѵ�.
*/

// �ڷ��� Data Type 
// (Game) Data : ����, �׸�, ��ȣ ���ǵǾ� ���� ���� ����
// ��ǻ�Ϳ��� ����� ������ �ʹ�. 
// ����ų(����), ų�� ���ھ� ����(�Ҽ����� ���� ���� = ����), ���� ����(�Ҽ����� �ִ� ���� = �Ҽ�)
// �̹��� 1920 x 1080, �Ҹ�(����, ��ġ)

// �ڷ���� Ư¡�� ���� ���¸� �з��� �ߴ�. Type
// �ڷ��� : ����, ����, �Ǽ�

// �ڷ����� �̿��ϴ� ���
// (� Ÿ��) �̸� <- ����(variable)
// �Լ��� ����ϴ� ���
// int ������ ǥ���ϴ� Ÿ��
// float �Ǽ�
// char ���� "H e l l o"
// string ���ڿ�

#include <stdio.h>

int main()
{
	// ����ų ���� ȭ�鿡 ����ϰ� �ʹ�.
	printf("����ų!\n");
	// �������� ������� ���ھ ����ϰ� �ʹ�.
	printf("10 vs 25\n");
	// è�Ǿ��� ������ �ִ� ������ ����ϰ� �ʹ�.
	printf(" AD : 10 \n");
	printf("\n");
	//////////////////////////////
	int level = 5;

	int SamiraFLHP = 630;
	int SamiraFLAD = 57;
	float SamiraFLADC = 0.72f;

	int SamiraGHP = 108;
	int SamiraGAD = 3;
	float SamiraGADC = 3.3f;

	int SnowHP = SamiraFLHP + (level - 1) * SamiraGHP;
	int SnowAD = SamiraFLAD + (level - 1) * SamiraGAD;
	float SnowADC = SamiraFLADC + (level - 1) * SamiraGADC;

	printf("��̶� ����\n");
	printf("ü�� : %d (+%d)\n", SamiraFLHP, SamiraGHP);
	printf("���� ü�� : %d\n", SnowHP);
	printf("���ݷ� : %d (+%d)\n", SamiraFLAD, SamiraGAD);
	printf("���� ���ݷ� : %d\n", SnowAD);
	printf("���ݼӵ� : %f (+%f)\n", SamiraFLADC, SamiraGADC);
	printf("���� ���ݼӵ� : %f\n", SnowADC);
	printf("\n");

	int ApheliosFLHP = 600;
	int ApheliosFLAD = 55;
	float ApheliosFLADC = 0.7f;

	int ApheliosGHP = 101;
	int ApheliosGAD = 5;
	float ApheliosGADC = 4.1f;

	int AnowHP = ApheliosFLHP + (level - 1) * ApheliosGHP;
	int AnowAD = ApheliosFLAD + (level - 1) * ApheliosGAD;
	float AnowADC = ApheliosFLADC + (level - 1) * ApheliosGADC;

	printf("���縮���� ����\n");
	printf("ü�� : %d (+%d)\n", ApheliosFLHP, ApheliosGHP);
	printf("���� ü�� : %d\n", AnowHP);
	printf("���ݷ� : %d (+%d)\n", ApheliosFLAD, ApheliosGAD);
	printf("���� ���ݷ� : %d\n", AnowAD);
	printf("���ݼӵ� : %f (+%f)\n", ApheliosFLADC, ApheliosGADC);
	printf("���� ���ݼӵ� : %f\n", AnowADC);

	if (SnowHP > AnowHP) {
		printf("Samira WIN!");
	}
	else {
		printf("Aphelios WIN!");
	}






	// �� ������ ���� ���ϴ� ��������� ��ǻ�Ͱ� �����߳���?
	// ��~
	// ���� vs ���� �� �ؾ���

	// 5���϶���?

	// �ٸ� è�Ǿ����ε� ���� ������� ������ ǥ���غ�����

	// �м��غ��� ���� ������ ���� ��������
	// ���� ǥ�� �غ���

}