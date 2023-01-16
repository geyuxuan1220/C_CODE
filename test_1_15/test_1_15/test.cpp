#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_NONSTDC_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#define	N 50
#define M 50
void Show(char a[][M], int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		/*int j = 0;
		for (j = 0; j < n; j++) {
			printf("%c", a[i][j]);
		}
		printf("\n");*/
		puts(a[i]);
	}
}

void Playgo(char a[][M], int n) {
	int x = 1, y = 1;
	int exitx = 10, exity = 10;
	char input;
	while (x != 10 || y != 10) {
		if (kbhit()) {
			input = getch();
			if (input == 'a' && a[x][y - 1] != '*') {
				a[x][y] = ' ';
				y--;
				a[x][y] = 'o';
			}
			if (input == 's' && a[x+1][y] != '*') {
				a[x][y] = ' ';
				x++;
				a[x][y] = 'o';
			}
			if (input == 'd' && a[x][y + 1] != '*') {
				a[x][y] = ' ';
				y++;
				a[x][y] = 'o';
			}
			if (input == 'w' && a[x-1][y] != '*') {
				a[x][y] = ' ';
				x--;
				a[x][y] = 'o';
			}
		
		}
		system("cls");
		Show(a, n);
		Sleep(200);
	}
	printf("ÄãÓ®ÁË\n");
	system("pause");
}
int main() {
	char a[N][M]={"************",
				  "*o         *",
				  "* **********",
				  "* *   *   **",
				  "* * * * * **",
				  "* * * * *  *",
				  "* * * * *  *",
				  "* * * * ** *",
				  "* * * * ** *",
			      "* * * * ** *",
				  "*   *   **  ",
				  "************" };
	int n = 12;
	Show(a, n);
	Playgo(a, n);
	return 0;
}