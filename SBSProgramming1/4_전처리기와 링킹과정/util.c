#include "util.h"

// Ŀ�� ��ġ �̵� �Լ� ����
void gotoxy(int x, int y) {
    COORD Pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}