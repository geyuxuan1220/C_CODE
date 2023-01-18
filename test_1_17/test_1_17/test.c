#include<stdio.h>
int f() {
	union {
		char c;
		int i;
	}un;
	un.i = 1;
	return un.c;
}

//enum sex {
//	man,
//woman,
//wofan
//
//};
//void test(int* p) {
//
//}
//char* my_strcpy(char* ch, const char* c) {
//
//}
int main() {
	/*char* (*pf[4])(char*, const char*) = {my_strcpy};*/
	/*printf("%d\n", wofan);
	printf("%d\n", woman);
	printf("%d\n", man);*/
	/*int ret = f();
	int e = 0x11223344;
	if (ret == 0) {
		printf("´ó¶Ë");
	}
	else
		printf("Ð¡¶Ë");*/

	int* arr[10];
	int(*pa)[10];
	int arr1[10];
	int* p = &arr;
	pa = arr;
	int arr2[3][4];
	/*test(&arr2);*/
	return 0;
}