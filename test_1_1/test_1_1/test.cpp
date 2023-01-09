
#include"game.h"


void menu() {
	printf("******************************\n");
	printf("***1.开始游戏  0.退出游戏*****\n");
	printf("******************************\n");
}

void game() {
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS, '*');//初始化;
	//displayboard(mine, ROW, COL);
	setmine(mine, ROW, COL);//布置雷
	//displayboard(mine, ROW, COL);
	
	displayboard(show, ROW, COL);
	
	findmine(mine,show,ROW,COL);//扫雷
	
	
}
void test() {
	int input=0;
	srand((unsigned int)time(NULL));

	do{
		menu();
		printf("请选择·:>\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			system("cls");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}