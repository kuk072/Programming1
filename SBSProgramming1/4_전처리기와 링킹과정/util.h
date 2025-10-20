#pragma once
#include <windows.h> // COORD 구조체와 SetConsoleCursorPosition 함수에 필요

// 콘솔창 크기 정의
#define SCREEN_WIDTH 79
#define SCREEN_HEIGHT 24

// 커서 위치 이동 함수 선언
void gotoxy(int x, int y);