#include<stdio.h>
#include<string.h>
struct stu {
	char name[20];
	int age;
};

void Swap(char* a, char* b,int width) {
	int i = 0;
	for (i = 0; i < width; i++) {
		char tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b++;
	}
}
void Bubblu(void* base, int sz, int width,int (*cmp)(void*e1,void*e2) ) {
	int i = 0;
	for (i = 0; i < sz-1; i++) {
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
			if (cmp((char*)base + j * width, (char*)base + (j+1) * width) > 0) {
				Swap((char*)base + j * width, (char*)base + (j +1)* width,width);

			}
		}
	}
}

int cmp_int(void* e1, void* e2) {
	return (* (int*)e1) - ( * (int*)e2);
}

int cmp_float(void* e1, void* e2) {
	if ((*(float*)e1) - (*(float*)e2) > 1e-6)
		return 1;
	else
		return 0;
	//return (int)(*(float*)e1) - (*(float*)e2);?????
}

int cmp_struct_by_age(void* e1, void* e2) {
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

int cmp_struct_by_name(void* e1, void* e2) {
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("排序前\n");
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
		
	}
	printf("\n");
	Bubblu(arr, sz, sizeof(arr[0]),cmp_int);
	printf("排序后\n");
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	
	}
	printf("\n");
}


void test1() {
	float arr1[] = { 6.0,1.5,1.2,0.2,0.1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	printf("排序前\n");
	for (int i = 0; i < sz; i++) {
		printf("%f ", arr1[i]);
		
	}
	printf("\n");
	Bubblu(arr1, sz, sizeof(arr1[0]), cmp_float);
	printf("排序后\n");
	for (int i = 0; i < sz; i++) {
		printf("%f ", arr1[i]);
		
	}
	printf("\n");
}

void test2() {
	struct stu s[] = { {"ge",18},{"yu",15},{"xuan",20}};
	
	int sz = sizeof(s) / sizeof(s[0]);
	printf("排序前\n");
	for (int i = 0; i < sz; i++) {
	
		printf("%s ", s[i].name);
		printf("%d ", s[i].age);
		printf("\n");
	}
	Bubblu(s, sz, sizeof(s[0]), cmp_struct_by_age);
	printf("排序后\n");
	for (int i = 0; i < sz; i++) {
		
		printf("%s ", s[i].name);
		printf("%d ", s[i].age);
		printf("\n");
	}
}

void test3() {
	struct stu s[] = { {"ge",18},{"yu",15},{"xuan",20} };

	int sz = sizeof(s) / sizeof(s[0]);
	printf("排序前\n");
	for (int i = 0; i < sz; i++) {

		printf("%s ", s[i].name);
		printf("%d ", s[i].age);
		printf("\n");
	}
	Bubblu(s, sz, sizeof(s[0]), cmp_struct_by_name);
	printf("排序后\n");
	for (int i = 0; i < sz; i++) {

		printf("%s ", s[i].name);
		printf("%d ", s[i].age);
		printf("\n");
	}
}
int main() {
	test();//整形
	test1();//浮点型
	test2();//结构体
	test3();//结构体（字符串）
	return 0;
}