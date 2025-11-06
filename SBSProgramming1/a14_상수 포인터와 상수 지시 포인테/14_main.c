#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1. 포인터 복습
// int* numPtr = 1;
// *numPtr -> 주소에 저장된 값을 역참조.

// const int* aPtr;      -> 이거로 전달된 주소는 절대 바꾸지 말 것.

void Test1(int* xPtr, int* yPtr, int amountX, int amountY);
void Test2(const int* const playerWallet);

int main()
{
	printf("Test1 예제 코드 구현\n");
	int playerX = 0;
	int playerY = 0;
	int* playerXPtr = &playerX;
	int* playerYPtr = &playerY;
	Test1(playerXPtr, playerYPtr, 2, 5);
	printf("playerX 값: %d, playerY 값: %d", playerX, playerY);

	// 상수 지시 포인터가 왜 문법적으로 존재하는가?
	const double pi = 3.14;
	const double* piPtr = &pi; //const 값을 pointer로 쓰려면 이렇게 써야한다
	//*piPtr += 2;
	printf("파이의 값 : %.2lf\n", pi);


	//예제2. const int*로 선언된 포인터 변수는 그 값을 변경하지 못한다.

	int boxX = 10;
	const int* const boxXPtr = &boxX;
	//(*boxXPtr) += 2; // 포인터에 저장되어 있는 값을 수정하지 마세요. 상수 지시 포인터 const pointer

	//예제3. 상수 포인터. 포인터(주소) 바뀌지 않는다.

	int box2 = 5;
	//boxXPtr = &box2;
	printf("boxXPtr에 들어있는 값 : %d\n", *boxXPtr);

	//예제4. 함수에 상수 포인터 / 상수 지시 포인터를 직접 사용해보기.

	int inventory[3] = { 100, 10, 5 };  // 동전의 수, 레드 포션의 개수, 파랑 포션의 수
	const char* inventoryText[3] = { "동전", "레드 포션", "파랑 포션" };
	int a = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("%s : %d개 \t", inventoryText[i], inventory[i]);
	}
	printf("\n");

	int playerWallet = 100;
	Test2(&playerWallet);
	
	// 그래서 포인터를 playerWallet 주소로 넘기는 이유가 무엇인가?

}

// Test1함수를 보고 이 함수가 어떤 목적으로 사용이 될 건지 분석
// 첫번째 요소 : 주소를 전달받음 -> 주소를 이용해서 무엇을 할 것인가? 정수형 주소를 - 이름이 x
// 주소에 저장되어 있는 값을 변경해서 사용하겠다. 5 -> amountX 더해서 이 더한값으로 바꾸겠다.

void Test1(int* xPtr, int* yPtr, int amountX, int amountY)
{
	// int x = main에서 전달받은 값 //으로 변경됨.
	*xPtr = *xPtr + amountX;
	*yPtr = *yPtr + amountY;

}

void Test2(const int* const playerWallet)
{
	// 플레이어가 가지고 있는 돈을 출력해줘.
	
	printf("플레이어가 가지고 있는 돈 : %d\n", *playerWallet);
}