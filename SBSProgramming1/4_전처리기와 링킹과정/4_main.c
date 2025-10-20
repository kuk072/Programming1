#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "util.h" // util.h에 windows.h가 포함되어 있음

int main() {
    int x = 10, y = 10;
    int key;

    system("cls");

    while (1) {
        gotoxy(x, y);
        printf(" ");

        if (_kbhit()) {
            key = _getch();

            if (key == 27) {
                break;
            }

            int next_x = x;
            int next_y = y;

            if (key == 224 || key == 0) {
                key = _getch();
                switch (key) {
                case 72:
                    next_y--;
                    break;
                case 80:
                    next_y++;
                    break;
                case 75:
                    next_x--;
                    break;
                case 77:
                    next_x++;
                    break;
                }
            }

            if (next_x >= 0 && next_x < SCREEN_WIDTH && next_y >= 0 && next_y < SCREEN_HEIGHT) {
                x = next_x;
                y = next_y;
            }
        }

        gotoxy(x, y);
        printf("P");

        Sleep(100);
    }

    system("cls");
    printf("게임 종료!\n");

    return 0;
}





