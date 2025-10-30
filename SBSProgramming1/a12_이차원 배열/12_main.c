#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
*  - 배열의 활용
*  - 2차원 배열
*  - 게임에서 적용
*/

// 플레이어 조작
// 

// 플레이어 : P
const char PLAYER = 'P';          // 문자의 크기가 1인 기호만 대체 가능
// 몬스터   : @
const char MONSTER = '@';
// 함정     : $
const char MONEY = '$';
// 벽       : #
const char WALL = '#';

#define MAPSIZE 10


int main()
{
	// Text로 출력을 해야한다. -> 문자로 이루어져있는 배열

	int monsterX = 7;
	int monsterY = 7;

	char STAGE[MAPSIZE][MAPSIZE + 1];
	// 10 char 저장할 수 있는데 첫번째 데이터는 p 저장하겠다

	// (0,0)에는 플레이어
	// (0,2)에는 몬스터
	// (0,4)에는 함정
	for (int i = 0; i < MAPSIZE; i++) {
		for (int j = 0; j < MAPSIZE; j++) {
			STAGE[i][j] = ' ';              // 내부를 먼저 ‘ ’(공백)으로 초기화
		}
		STAGE[i][MAPSIZE] = '\0';            // 각 행 문자열 널 종료 (인덱스 10)
	}

	// 이중반복문으로 맵 세팅(벽으로)하기
	for (int i = 0; i < MAPSIZE; i++)
	{
		if (i == 0 || i == MAPSIZE - 1) {
			for (int j = 0; j < MAPSIZE; j++) {
				STAGE[i][j] = WALL;                    // 첫행과 마지막행을 다 #으로 채우기
			}
		}
		for (int k = 0; k < MAPSIZE; k++) {
			STAGE[k][0] = WALL;                       // 첫열과 마지막 열을 다 #으로 채우기
			STAGE[k][MAPSIZE-1] = WALL;
		}
	}

	// 게임 로직. 5Frame 후에 몬스터가 x방향으로 1 움직였다. -> x +1

	// (3,5) 플레이어가 생성된다.

	// (5,7) 돈이 생성된다.

	// (8,8) 몬스터가 생성된다.
	STAGE[monsterY][monsterX] = MONSTER;



	// 생성된 맵 프린트하기
	for (int h = 0; h < MAPSIZE; h++)
	{
		printf("%s\n", STAGE[h]);            
	}


}