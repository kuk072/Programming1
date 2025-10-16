/*
*  날짜 : 2025-10-16
*  학습목표 : 자료형과 변수
*  실습목표 : 실제 게임을 분석해서 자료형을 이해한다.
*/

// 자료형 Data Type 
// (Game) Data : 숫자, 그림, 기호 정의되어 있지 않은 정보
// 컴퓨터에게 명령을 내리고 싶다. 
// 더블킬(문자), 킬수 스코어 정보(소숫점이 없는 숫자 = 정수), 스탯 정보(소숫점이 있는 숫자 = 소수)
// 이미지 1920 x 1080, 소리(파장, 피치)

// 자료들의 특징에 따라서 형태를 분류를 했다. Type
// 자료형 : 문자, 정수, 실수

// 자료형을 이용하는 방법
// (어떤 타입) 이름 <- 변수(variable)
// 함수를 사용하는 방법
// int 정수를 표현하는 타입
// float 실수
// char 문자 "H e l l o"
// string 문자열

#include <stdio.h>

int main()
{
	// 더블킬 게임 화면에 출력하고 싶다.
	printf("더블킬!\n");
	// 레드팀과 블루팀의 스코어를 출력하고 싶다.
	printf("10 vs 25\n");
	// 챔피언이 가지고 있는 스텟을 출력하고 싶다.
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

	printf("사미라 정보\n");
	printf("체력 : %d (+%d)\n", SamiraFLHP, SamiraGHP);
	printf("현재 체력 : %d\n", SnowHP);
	printf("공격력 : %d (+%d)\n", SamiraFLAD, SamiraGAD);
	printf("현재 공격력 : %d\n", SnowAD);
	printf("공격속도 : %f (+%f)\n", SamiraFLADC, SamiraGADC);
	printf("현재 공격속도 : %f\n", SnowADC);
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

	printf("아펠리오스 정보\n");
	printf("체력 : %d (+%d)\n", ApheliosFLHP, ApheliosGHP);
	printf("현재 체력 : %d\n", AnowHP);
	printf("공격력 : %d (+%d)\n", ApheliosFLAD, ApheliosGAD);
	printf("현재 공격력 : %d\n", AnowAD);
	printf("공격속도 : %f (+%f)\n", ApheliosFLADC, ApheliosGADC);
	printf("현재 공격속도 : %f\n", AnowADC);

	if (SnowHP > AnowHP) {
		printf("Samira WIN!");
	}
	else {
		printf("Aphelios WIN!");
	}






	// 이 정보를 내가 원하는 결과값으로 컴퓨터가 실행했나요?
	// 네~
	// 만족 vs 조금 더 해야함

	// 5렙일때는?

	// 다른 챔피언으로도 위의 방식으로 정보를 표현해보세용

	// 분석해보고 싶은 게임의 정보 가져오기
	// 수식 표현 해보기

}