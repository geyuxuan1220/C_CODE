#include"game.h"



void initboard(char board[ROWS][COLS], int rows, int cols,char set) {
	int i = 0;
	int j = 0;
	for (i = 0; i <rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}
void displayboard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	while (count) {
		
		int x = rand() % row+1;
		int y = rand() % col+1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y) {
	//int ret = 0;
	//for (int i = x - 1; i <= x + 1; i++) {
		//for (int j = y - 1; j <= y + 1; j++) {
			//ret = ret + mine[i][j] - '0';
		//}
	//}
	//return ret;
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

int Win(char show[ROWS][COLS], int row, int col) {
	int count = 0;
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if (show[i][j] == '*') {
				count++;
			}
		}
	}
	return count;
}

void open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y) {
	int ret = get_mine_count(mine, x, y);
	if (ret == 0) {
		show[x][y] = ' ';
		for (int i = x - 1; i <= x + 1; i++) {
			for (int j = y - 1; j <= y + 1; j++) {
				if (i > 0 && j > 0 && show[i][j] == '*' && mine[i][j] != '1') {
					open(mine, show, i, j);
				}
			}
		}
	/*	if ((x - 1) > 0 && (y - 1) > 0 && (show[x - 1][y - 1] == '*'))
			open(mine, show, x - 1, y - 1);
		if ((x - 1) > 0 && (y) > 0 && (show[x - 1][y] == '*'))
			open(mine, show, x - 1, y);
		if ((x - 1) > 0 && (y + 1) > 0 && (show[x - 1][y + 1] == '*'))
			open(mine, show, x - 1, y + 1);
		if ((x) > 0 && (y - 1) > 0 && (show[x][y - 1] == '*'))
			open(mine, show, x, y - 1);
		if ((x) > 0 && (y + 1) > 0 && (show[x][y + 1] == '*'))
			open(mine, show, x, y + 1);
		if ((x + 1) > 0 && (y - 1) > 0 && (show[x + 1][y - 1] == '*'))
			open(mine, show, x + 1, y - 1);
		if ((x + 1) > 0 && (y) > 0 && (show[x + 1][y] == '*'))
			open(mine, show, x + 1, y);
		if ((x + 1) > 0 && (y + 1) > 0 && (show[x + 1][y + 1] == '*'))
			open(mine, show, x + 1, y + 1);*/

	}
	else
		show[x][y] = ret + '0';
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;
	while (win !=EASY_COUNT) {
		printf("请输入坐标\n");
		scanf("%d%d", &x, &y);
		//system("cls");
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				system("cls");
				printf("你被炸了\n");
				displayboard(mine, row, col);
				break;
			}
			else {
				/*int count=get_mine_count(mine, x, y);
				if (count == 0) {
					for (int i = x - 1; i <= x + 1; i++) {
						for (int j = y - 1; j <= y + 1; j++) {
							if (get_mine_count(mine, i, j) == 0) {
								show[i][j] = ' ';
							}
						}
					}
					displayboard(show, ROW, COL);

				}
				else {
					show[x][y] = count + '0';*/
				if (mine[x][y] == '0' && show[x][y] == '*') {
					open(mine, show, x, y);
					win = Win(show, ROW, COL);
					system("cls");
					displayboard(show, ROW, COL);
					
				}
			}

		}
		else {
			printf("输入非法，请重新输入\n");
		}
	}
	
		
	if ((win == EASY_COUNT)) {
		printf("恭喜你，游戏胜利\n");
		displayboard(mine, ROW, COL);
	}
}