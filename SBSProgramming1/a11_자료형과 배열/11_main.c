#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 어떤 점이 장점이 되는가?
// 기존 방식, 새로운 방식 둘다 사용.
// obsolete : 더이상 쓸모가 없어져서 지원을 안하겠다.
// 이 코드를 사용하면 경고가 뜸, 이거 이제 지원 안해줄 거임 새로운 문법써.

// 반복문

int main()
{
	// int a=0, b=0, c=0, d=0, e=0; 이랑 같은 뜻임
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	// int a0, a1, ...
	int numArray[] = { 0,1,2,3 };
	printf("값 : %d\n", numArray[0]);


	// ex) 몬스터가 100마리 존재한다.
	int numArray2[100];

	for (int i = 0; i < 100; i++) {
		a++;
	}

	char name[10];

	scanf("%s", name);   // name의 주소
	printf("%s\n", name);

	if (name == "가위")
	{
		printf("같다\n");
	}
	else {
		printf("다르다\n");
	}

	// name "리터럴문자" 주소가 다르다. 저장되는 영역이 다르기 때문.
	// 문자열의 비교 함수로 만들어본다. 실행할 수 있게 본다.

	// name 가위 들어있는 내용은 같다. '가' '위' '\0' -> 같다 알려주는 함수     bool IsStrCompare

	// 두 개의 문자열에 값을 비교하는 방법? -> strcmp

	if (strcmp("가위", name) == 0 )
	{
		printf("같다.\n");
	}
	else
	{
		printf("다르다.\n");
	}
}