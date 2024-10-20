#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<stdbool.h>
#include <time.h>
#include<conio.h>

int x = 1;
int y = 1;
int x2 = 70;
int y2 = 20;
int ya = 0;
bool a = true;
int tmp;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int sc = 0;
int msec = 50;
int cnt;
char C[20] = { ' ', };

void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CursorView()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void play()
{
	for (int i = 0; i < 20; i++)
	{
		C[i] = '  ';
	}
	while (1)
	{
		int a = 0;
		while (1)
		{
			if (GetAsyncKeyState(VK_DOWN))
			{
				if (a < 2)
				{
					a++;
				}
				else if (a == 2)
				{
					a = 0;
				}
			}
			if (GetAsyncKeyState(VK_UP))
			{
				if (a > 0)
				{
					a--;
				}
				else if (a == 0)
				{
					a = 2;
				}
			}
			system("cls");
			if (a == 0)
			{
				gotoxy(1, 1);
				printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
				printf("                   화살표 키를 이용하여 조작합니다\n\n");
				printf("                           >  게임시작 <\n\n");
				printf("                                설정\n\n");
				printf("                              게임종료\n\n");
				gotoxy(1, 23);
				printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
				printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
			}
			if (a == 1)
			{
				gotoxy(1, 1);
				printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
				printf("                   화살표 키를 이용하여 조작합니다\n\n");
				printf("                              게임시작\n\n");
				printf("                           >    설정   <\n\n");
				printf("                              게임종료\n\n");
				gotoxy(1, 23);
				printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
				printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
			}
			if (a == 2)
			{
				gotoxy(1, 1);
				printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
				printf("                   화살표 키를 이용하여 조작합니다\n\n");
				printf("                              게임시작\n\n");
				printf("                                설정\n\n");
				printf("                           >  게임종료 <\n\n");
				gotoxy(1, 23);
				printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
				printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
			}
			if (GetAsyncKeyState(VK_RETURN)) {
				break;
			}
			Sleep(10);

		}

		if (a == 2)
		{
			system("cls");
			gotoxy(1, 1);
			printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=");
			printf("\n\n\n\n\n\n\n\n                                 종료 됨");
			gotoxy(1, 23);
			printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
			printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
			Sleep(1000);
			system("mode con cols=60 lines=20");
			Sleep(25);
			system("mode con cols=50 lines=17");
			Sleep(25);
			system("mode con cols=35 lines=14");
			Sleep(25);
			system("mode con cols=25 lines=10");
			Sleep(25);
			system("mode con cols=15 lines=6");
			Sleep(25);
			system("mode con cols=7 lines=3");
			Sleep(5);
			exit(0);
		}

		if (a == 1)
		{
			system("cls");
			Sleep(100);
			while (1)
			{
				if (GetAsyncKeyState(VK_DOWN))
				{
					if (b < 3)
					{
						b++;
					}
					else if (b == 3)
					{
						b = 0;
					}
				}
				if (GetAsyncKeyState(VK_ESCAPE)) {
					play();
				}
				if (GetAsyncKeyState(VK_UP))
				{
					if (b > 0)
					{
						b--;
					}
					else if (b == 0)
					{
						b = 3;
					}
				}
				if (b == 0)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                               캐릭터 선택\n\n");
					printf("                                   >◎<\n\n");
					printf("                                    ★\n\n");
					printf("                                    ♥\n\n");
					printf("                                    ▩\n\n");
					c = 0;
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (b == 1)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                               캐릭터 선택\n\n");
					printf("                                    ◎\n\n");
					printf("                                   >★<\n\n");
					printf("                                    ♥\n\n");
					printf("                                    ▩\n\n");
					c = 1;
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (b == 2)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                               캐릭터 선택\n\n");
					printf("                                    ◎\n\n");
					printf("                                    ★\n\n");
					printf("                                   >♥<\n\n");
					printf("                                    ▩\n\n");
					c = 2;
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (b == 3)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                               캐릭터 선택\n\n");
					printf("                                    ◎\n\n");
					printf("                                    ★\n\n");
					printf("                                    ♥\n\n");
					printf("                                   >▩<\n\n");
					c = 3;
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (GetAsyncKeyState(VK_RETURN))
				{
					break;
				}
				Sleep(100);
				system("cls");
			}
			system("cls");
			Sleep(100);
			while (1)
			{
				if (GetAsyncKeyState(VK_DOWN))
				{
					if (d < 8)
					{
						d++;
					}
					else if (d == 8)
					{
						d = 0;
					}
				}
				if (GetAsyncKeyState(VK_UP))
				{
					if (d > 0)
					{
						d--;
					}
					else if (d == 0)
					{
						d = 8;
					}
				}
				if (d == 0)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                                게임 설정\n");
					printf("                             배경 색상 선택\n\n");
					printf("                                >검은색<\n\n");
					printf("                                 파란색\n\n");
					printf("                                  녹색\n\n");
					printf("                                 청록색\n\n");
					printf("                                 빨간색\n\n");
					printf("                                 자주색\n\n");
					printf("                                 노란색\n\n");
					printf("                                  흰색\n\n");
					printf("                                  회색");
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (d == 1)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                                게임 설정\n");
					printf("                             배경 색상 선택\n\n");
					printf("                                 검은색\n\n");
					printf("                                >파란색<\n\n");
					printf("                                  녹색\n\n");
					printf("                                 청록색\n\n");
					printf("                                 빨간색\n\n");
					printf("                                 자주색\n\n");
					printf("                                 노란색\n\n");
					printf("                                  흰색\n\n");
					printf("                                  회색");
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (d == 2)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                                게임 설정\n");
					printf("                             배경 색상 선택\n\n");
					printf("                                 검은색\n\n");
					printf("                                 파란색\n\n");
					printf("                                > 녹색 <\n\n");
					printf("                                 청록색\n\n");
					printf("                                 빨간색\n\n");
					printf("                                 자주색\n\n");
					printf("                                 노란색\n\n");
					printf("                                  흰색\n\n");
					printf("                                  회색");
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (d == 3)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                                게임 설정\n");
					printf("                             배경 색상 선택\n\n");
					printf("                                 검은색\n\n");
					printf("                                 파란색\n\n");
					printf("                                  녹색\n\n");
					printf("                                >청록색<\n\n");
					printf("                                 빨간색\n\n");
					printf("                                 자주색\n\n");
					printf("                                 노란색\n\n");
					printf("                                  흰색\n\n");
					printf("                                  회색");
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (d == 4)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                                게임 설정\n");
					printf("                             배경 색상 선택\n\n");
					printf("                                 검은색\n\n");
					printf("                                 파란색\n\n");
					printf("                                  녹색\n\n");
					printf("                                 청록색\n\n");
					printf("                                >빨간색<\n\n");
					printf("                                 자주색\n\n");
					printf("                                 노란색\n\n");
					printf("                                  흰색\n\n");
					printf("                                  회색");
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (d == 5)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                                게임 설정\n");
					printf("                             배경 색상 선택\n\n");
					printf("                                 검은색\n\n");
					printf("                                 파란색\n\n");
					printf("                                  녹색\n\n");
					printf("                                 청록색\n\n");
					printf("                                 빨간색\n\n");
					printf("                                >자주색<\n\n");
					printf("                                 노란색\n\n");
					printf("                                  흰색\n\n");
					printf("                                  회색");
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (d == 6)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                                게임 설정\n");
					printf("                             배경 색상 선택\n\n");
					printf("                                 검은색\n\n");
					printf("                                 파란색\n\n");
					printf("                                  녹색\n\n");
					printf("                                 청록색\n\n");
					printf("                                 빨간색\n\n");
					printf("                                 자주색\n\n");
					printf("                                >노란색<\n\n");
					printf("                                  흰색\n\n");
					printf("                                  회색");
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (d == 7)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                                게임 설정\n");
					printf("                             배경 색상 선택\n\n");
					printf("                                 검은색\n\n");
					printf("                                 파란색\n\n");
					printf("                                  녹색\n\n");
					printf("                                 청록색\n\n");
					printf("                                 빨간색\n\n");
					printf("                                 자주색\n\n");
					printf("                                 노란색\n\n");
					printf("                                > 흰색 <\n\n");
					printf("                                  회색");
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (d == 8)
				{
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
					printf("                                게임 설정\n");
					printf("                             배경 색상 선택\n\n");
					printf("                                 검은색\n\n");
					printf("                                 파란색\n\n");
					printf("                                  녹색\n\n");
					printf("                                 청록색\n\n");
					printf("                                 빨간색\n\n");
					printf("                                 자주색\n\n");
					printf("                                 노란색\n\n");
					printf("                                  흰색\n\n");
					printf("                                > 회색 <");
					gotoxy(1, 23);
					printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
					printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
					gotoxy(1, 1);
				}
				if (GetAsyncKeyState(VK_RETURN))
				{
					break;
				}
				Sleep(100);
				system("cls");
			}
			if (GetAsyncKeyState(VK_RETURN))
			{
				Sleep(50);
			}
			if (d == 0)
			{
				system("color 07");
			}
			if (d == 1)
			{
				system("color 16");
			}
			if (d == 2)
			{
				system("color 25");
			}
			if (d == 3)
			{
				system("color 34");
			}
			if (d == 4)
			{
				system("color 43");
			}
			if (d == 5)
			{
				system("color 52");
			}
			if (d == 6)
			{
				system("color 61");
			}
			if (d == 7)
			{
				system("color 70");
			}
			if (d == 8)
			{
				system("color 80");
			}
			system("cls");
			printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
			printf("\n설정이 완료되었습니다.");
			gotoxy(1, 23);
			printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
			printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
			gotoxy(1, 1);
			Sleep(1500);
		}
		int time = 0;
		int time1 = 0;
		const int blocktime = 15;

		if (a == 0) {
			system("cls");
			sc = 0;
			msec = blocktime;
			x2 = 70;
			for (int i = 0; i < 2; i++) {
				system("cls");
				printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
				printf("\n게임을 구현하는 중.");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				gotoxy(1, 23);
			}
			system("cls");
			gotoxy(1, 1);
			printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
			gotoxy(x, y);
			while (1)
			{

				if (GetAsyncKeyState(VK_SPACE) && a) {
					ya += 5;
					a = false;
				}

				if (time1 >= blocktime)
				{
					time1 = 0;


					if (y <= 20)
					{
						y -= ya;
						ya -= 2;
					}
					if (y >= 21)
					{
						ya = 0;
						y = 20;
						a = true;
					}
				}
				if (GetAsyncKeyState(VK_ESCAPE)) {
					system("cls");
					printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=");
					printf("\n\n\n\n\n\n\n\n\n                               게임 종료 됨\n\n\n\n\n\n\n\n\n");
					Sleep(2500);
					play();
				}
				tmp = y;
				system("cls");
				gotoxy(1, 1);
				printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
				y = 21;
				gotoxy(x, y);
				printf("〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓〓");
				x = 1;
				y = 22;
				gotoxy(x, y);
				printf("Score : %d", sc);
				y = tmp;
				x = 3;
				gotoxy(x, y);
				x = 1;
				if (c == 0)
				{
					printf("◎");
				}
				else if (c == 1)
				{
					printf("★");
				}
				else if (c == 2)
				{
					printf("♥");
				}
				else if (c == 3)
				{
					printf("▩");
				}
				gotoxy(x2, y2);
				printf("▲");
				if (x2 != 1 && (time >= msec))
				{
					time = 0;
					x2--;
				}
				else if (x2 == 1)
				{
					system("cls");
					x2 = 69;
					sc += blocktime + 5 - msec;
					if (msec < 0)
					{
						msec = 0;
					}
					else if (msec > 0)
					{
						msec -= 1;
					}
				}

				Sleep(10);
				if (x == x2 - 1 || x == x2)
				{
					if (y == y2) {
						system("cls");
						printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=\n\n");
						gotoxy(19, 8);
						printf("▦▦▦▦▦▦▦▦▦▦▦▦▦▦▦▦▦");
						gotoxy(19, 9);
						printf("▦                              ▦");
						gotoxy(19, 10);
						printf("▦           GAME OVER          ▦");
						gotoxy(19, 11);
						printf("▦                              ▦");
						gotoxy(19, 12);
						if (sc < 10)
						{
							printf("▦           SCORE: %d           ▦", sc);
						}
						if (sc >= 10 )
						{
							printf("▦           SCORE: %d          ▦", sc);
						}
						if (sc >= 100)
						{
							printf("▦          SCORE: %d          ▦", sc);
						}
						gotoxy(19, 13);
						printf("▦                              ▦");
						gotoxy(19, 14);
						printf("▦▦▦▦▦▦▦▦▦▦▦▦▦▦▦▦▦");
						gotoxy(19, 16);
						printf("계속하려면 Enter...");
						gotoxy(1, 22);
						printf("  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■\n");
						printf("■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■  ■");
						gotoxy(1, 1);
						while (1)
						{
							Sleep(1);
							if (GetAsyncKeyState(VK_RETURN))
							{
								break;
							}
						}
						Sleep(300);
						play();
					}
				}
				time += 10;
				time1 += 10;
			}
		}
	}
}

int main(void)
{
	CursorView();
	system("mode con cols=70 lines=24");
	system("title ※ 바운스 게임 ※");
	system("color 07");
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			y = 9;
			gotoxy(x, y);
			printf("\n=□=□=□=□=□=□=□=□=□= §바운스 게임§ =□=□=□=□=□=□=□=□=");
			printf("\n                                                       [Made by DH .L]\n\n");
			if (j == 0)
			{
				printf("                                로딩 중 △");
			}
			else if (j == 1)
			{
				printf("                                로딩 중 ▷");
			}
			else if (j == 2)
			{
				printf("                                로딩 중 ▽");
			}
			else if (j == 3)
			{
				printf("                                로딩 중 ◁");
			}
			Sleep(100);
		}
	}
	y = 1;
	system("cls");
	play();
}