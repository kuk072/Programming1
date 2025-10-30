#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
*  - �迭�� Ȱ��
*  - 2���� �迭
*  - ���ӿ��� ����
*/

// �÷��̾� ����
// 

// �÷��̾� : P
const char PLAYER = 'P';          // ������ ũ�Ⱑ 1�� ��ȣ�� ��ü ����
// ����   : @
const char MONSTER = '@';
// ����     : $
const char MONEY = '$';
// ��       : #
const char WALL = '#';

#define MAPSIZE 10


int main()
{
	// Text�� ����� �ؾ��Ѵ�. -> ���ڷ� �̷�����ִ� �迭

	int monsterX = 7;
	int monsterY = 7;

	char STAGE[MAPSIZE][MAPSIZE + 1];
	// 10 char ������ �� �ִµ� ù��° �����ʹ� p �����ϰڴ�

	// (0,0)���� �÷��̾�
	// (0,2)���� ����
	// (0,4)���� ����
	for (int i = 0; i < MAPSIZE; i++) {
		for (int j = 0; j < MAPSIZE; j++) {
			STAGE[i][j] = ' ';              // ���θ� ���� �� ��(����)���� �ʱ�ȭ
		}
		STAGE[i][MAPSIZE] = '\0';            // �� �� ���ڿ� �� ���� (�ε��� 10)
	}

	// ���߹ݺ������� �� ����(������)�ϱ�
	for (int i = 0; i < MAPSIZE; i++)
	{
		if (i == 0 || i == MAPSIZE - 1) {
			for (int j = 0; j < MAPSIZE; j++) {
				STAGE[i][j] = WALL;                    // ù��� ���������� �� #���� ä���
			}
		}
		for (int k = 0; k < MAPSIZE; k++) {
			STAGE[k][0] = WALL;                       // ù���� ������ ���� �� #���� ä���
			STAGE[k][MAPSIZE-1] = WALL;
		}
	}

	// ���� ����. 5Frame �Ŀ� ���Ͱ� x�������� 1 ��������. -> x +1

	// (3,5) �÷��̾ �����ȴ�.

	// (5,7) ���� �����ȴ�.

	// (8,8) ���Ͱ� �����ȴ�.
	STAGE[monsterY][monsterX] = MONSTER;



	// ������ �� ����Ʈ�ϱ�
	for (int h = 0; h < MAPSIZE; h++)
	{
		printf("%s\n", STAGE[h]);            
	}


}