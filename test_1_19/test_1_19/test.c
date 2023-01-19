#include<stdio.h>

#include<memory.h>
struct S {
	int a;
	int arr[];//ÈáÐÔÊý×é
};
void* my_memcpy(void* des,const void* scr, int num) {
	void* cp = des;

	if ((char*)des -(char*)scr > 0) {
		while (num--){
			*((char*)des + num ) = *((char*)scr + num );
			/*--(char*)cp;
			--(char*)pc;*/
		}
	}
	else {
		while (num--) {
			*((char*)des)++ = *((char*)scr)++;
		}
	}
	return cp;
}

int main() {
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	my_memcpy(arr , arr+2,20);
	for ( i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}