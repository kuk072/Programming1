#pragma once
#include <windows.h> // COORD ����ü�� SetConsoleCursorPosition �Լ��� �ʿ�

// �ܼ�â ũ�� ����
#define SCREEN_WIDTH 79
#define SCREEN_HEIGHT 24

// Ŀ�� ��ġ �̵� �Լ� ����
void gotoxy(int x, int y);