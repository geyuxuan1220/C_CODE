#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int count;
void Move(int x, int y) {
	printf("%c->%c\n", x, y);
}

int hanoi(int a, char A, char B, char C) {
	if (a == 1)
		Move(A, C);//��A���ϵ���Ų��C����
	else {
		hanoi(a - 1, A, C, B);//��A���ϵ�n-1���̽���CŲ��B��
		Move(A, C);//��A��ʣ��һ������Ų��C��
		hanoi(a - 1, B, A, C);//��ʣ���a-1�����Ӵ�B����AŲ��C��
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