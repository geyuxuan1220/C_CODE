
#include"game.h"


void menu() {
	printf("******************************\n");
	printf("***1.��ʼ��Ϸ  0.�˳���Ϸ*****\n");
	printf("******************************\n");
}

void game() {
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS, '*');//��ʼ��;
	//displayboard(mine, ROW, COL);
	setmine(mine, ROW, COL);//������
	//displayboard(mine, ROW, COL);
	
	displayboard(show, ROW, COL);
	
	findmine(mine,show,ROW,COL);//ɨ��
	
	
}
void test() {
	int input=0;
	srand((unsigned int)time(NULL));

	do{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			system("cls");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}