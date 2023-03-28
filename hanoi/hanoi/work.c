#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int count;
void Move(int x, int y) {
	printf("%c->%c\n", x, y);
}

int hanoi(int a, char A, char B, char C) {
	if (a == 1)
		Move(A, C);//将A柱上的盘挪到C柱上
	else {
		hanoi(a - 1, A, C, B);//将A柱上的n-1个盘借助C挪向B；
		Move(A, C);//将A柱剩余一个盘子挪向C柱
		hanoi(a - 1, B, A, C);//将剩余的a-1个盘子从B借助A挪向C；
	}
	count++;
	return count;
}

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", hanoi(a, 'A', 'B', 'C'));
	return 0;
}