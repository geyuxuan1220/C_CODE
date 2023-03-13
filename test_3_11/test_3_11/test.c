#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//
////6.4
//int main() {
//	int a,b,c;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++) {
//		b = i * i;
//		c = i * i * i;
//		printf("%d^2=%d %d^3=%d\n",i, b,i, c);
//	}
//	return 0;
//}
//6.5
//int main() {
//	double C;
//	for (int i = 0; i <= 300; i+=10) {
//		C = (double)((i-32) * 5 / 9.0);
//		printf("%d(F)==%.1lf(C)\n ", i ,C);
//	}
//	return 0;
//}
////6.6
//int main() {
//	double sum=0;
//	for (int i = 0; i < 5; i++) {
//		sum = sum + 1000;
//		sum = sum / (1 + 0.01875*12);
//	}
//	printf("%.2f", sum);
//	return 0;
//}
//6.7
//#define EPS 1e-5
//int main() {
//	
//	double rate,sum=100;
//	int count = 0;
//	scanf("%lf", &rate);
//	while (sum<200){
//		sum = sum * (1 + rate);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//6.8
//int main() {
//	int i = 1,count=0;
//	double pi=0,tmp=1, sign = 1;
//	while (fabs(tmp) >= 1e-4) {
//			tmp = sign/ i;
//			pi = pi + tmp;
//			i += 2;
//			sign = -sign;
// count++;
//		}
//	printf("%d %lf",count  ,4 * pi);
//	return 0;
//}
//6.9
//int main() {
//	int i = 1,count=0;
//	double e=1,tmp=1;
//	while (fabs(tmp) >= 1e-5) {
//		tmp = tmp / i;
//		e = tmp + e;
//		count++;
//		i++;
//	}
//	printf("%d %lf", count, e);
//	return 0;
//}
//6.10
//int main() {
//	int a, b, c;
//	for (int i = 100; i <= 999; i++) {
//		a = i / 100;
//		c = i % 10;
//		b = (i - a * 100) / 10;
//		if (a * a * a + b * b * b + c * c * c == i) {
//			printf("%d是水仙花数\n", i);
//		}
//	}
//	return 0;
//}
////6.11
//int main() {
//	int m,i=0;
//	long long tmp = 0, nn = 1;
//	scanf("%d", &m);
//	/*do {
//
//		i++;
//		nn = i * nn;
//		tmp = tmp + nn;
//
//	} while (tmp <= m);*/
//	for (i = 1;; i++) {
//		nn = i * nn;
//		tmp = tmp + nn;
//		if (tmp >= m) {
//			break;
//		}
//	}
//	printf("%d", i-1);
//	return 0;
//}
//6.12
//int main() {
//	int a=0,sum=0,count=0;
//	do {
//		printf("input a:\n");
//		
//		sum = a + sum;
//		scanf("%d", &a);
//		count++;
//	} while (a>0);
//	printf("%d %d\n", sum,count-1);
//	return 0;
//}
////6.13
//int main() {
//	int a=0,sum=0,count=0;
//	do {
//		scanf("%d", &a);
//		if (a > 0) {
//			sum = sum + a;
//			count++;
//		}
//	} while (a);
//	printf("%d %d", sum, count);
//	return 0;
//}
//6.14
//int main() {
//	for (int i = 0; i <= 16; i++) {
//		for (int j = 0; j <= 25; j++) {
//			if (i * 3 + j * 2 + (30 - i - j) == 50) {
//				printf("men=%d women=%d children=%d\n", i, j, 30 - i - j);
//			}
//		}
//	}
//	return 0;
//}
//6.15
//int main() {
//	int j;
//	for (j = 0; j <= 98; j++) {
//		if (j * 2 + (98 - j) * 4 == 386) {
//			printf("chicken=%d,rabit=%d", j, 95 - j);
//		}
//	}
//	return 0;
//}
//6.16
//int main() {
//	int a;
//	for (a = 0; a <= 20; a++) {
//		for (int j = 0; j <= 33; j++) {
//			if ((100-a-j)%3==0&&a * 5 + j * 3 + (100 - a - j) / 3 == 100) {
//				printf("men=%d,women=%d,child=%d\n", a, j, 100 - a - j);
//			}
//		}
//	}
//	return 0;
//}
//6.17
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		printf("%-4d", i);
//	}
//	printf("\n");
//	for (int i = 1; i <= 9; i++) {
//		printf("%-4c", '-');
//	}
//	printf("\n");
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			printf("%-4d", i * j);
//		}
//		printf("\n");
//	}
//	for (int i = 1; i <= 9; i++) {
//		printf("%-4d", i);
//	}
//	printf("\n");
//	for (int i = 1; i <= 9; i++) {
//		printf("%-4c", '-');
//	}
//	printf("\n");
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%-4d", i * j);
//		}
//		printf("\n");
//	}
//	for (int i = 1; i <= 9; i++) {
//		printf("%-4d", i);
//	}
//	printf("\n");
//	for (int i = 1; i <= 9; i++) {
//		printf("%-4c", '-');
//	}
//	printf("\n");
//	for (int i = 1; i <=9; i++) {
//		for (int j = i; j <= 9; j++) {
//
//			printf("%-4d", i * j);
//		}
//		printf("\n");
//		for (int z = 0; z < 4 * i; z++) {
//			printf("%c", ' ');
//		}
//	}
//	return 0;
//}
//6.19
//int main() {
//	double f=0, s,tmp=1;
//	s = 100000*30;
//	for (int i = 0; i < 30; i++) {
//		f = f + tmp;
//		tmp = tmp * 2;
//
//	}
//	printf("stranger=%f\nmen=%f", f / 100, s);
//	return 0;
//}
//6.20
//int main() {
//	int i = 1000;
//	int a, b, c, d;
//	for (i = 1000; i <= 9999; i++) {
//		a = i / 1000;
//		b = (i - a * 1000) / 100;
//		c = (i - a * 1000 - b * 100) / 10;
//		d = i % 10;
//		if (a == b && c == d && a != c && (sqrt(i) - (int)sqrt(i)) == 0) {
//			printf("%d,%d", i,(int )sqrt(i));
//		}
//	}
//	return 0;
//}
// 
//6.21
//int main() {
//	int count1= 0,count2=0;
//	for (int i = 0; i <=20*7; i++){
//		if (i <= 20 * 5) {
//			if ((i % 5 == 0 || i % 6 == 0 || i % 7 == 0)) {
//				count1++;
//			}
//			if ((i % 5 == 0 && i % 6 == 0) || (i % 7 == 0 && i % 6 == 0) || (i % 5 == 0 && i % 7 == 0))
//			{
//				count2++;
//			}
//		}
//		if (i > 20 * 5 && i <=20 * 6) {
//			if (i % 6 == 0 || i % 7 == 0) {
//				count1++;
//			}
//			if (i % 7 == 0 && i % 6 == 0)
//			{
//				count2++;
//			}
//		}
//		if (i > 20 * 6 && i <= 20 * 7) {
//			if (i % 7 == 0)count1++;
//		}
//
//	}
//	printf("%d ", count1);
//	//for (int i = 0; i <= 20 * 7; i++) {
//	//	if (i % 5 == 0 && i <=20 * 5) {
//	//		count1++;
//	//		continue;
//	//	}
//	//	if (i % 6== 0 && i <= 20 * 6) {
//	//		count1++;
//	//		continue;
//	//	}
//	//	if (i % 7 == 0 && i <=20 * 7) {
//	//		count1++;
//	//	}
//	//}
//	//printf("%d", count1);
//	return 0;
//}
//6.22
//int main() {
//	double sum = 1,tmp=1;
//
//	for (int i = 2; i <=64; i++) {
//		tmp=tmp * 2;
//		sum = sum + tmp;
//	}
//	printf("%e\n", sum );
//	printf("%e", sum/1.42e8);
//	return 0;
//}
//int main() {
//		double sum = 1,tmp=1;
//	
//		for (int i = 1; i <=64; i++) {
//			tmp = pow(2, i-1);
//			sum = sum + tmp;
//		}
//		printf("%e\n", sum );
//		printf("%e", sum/1.42e8);
//		return 0;
//}
//自幂数
int main() {
	long long a,tmp,sum=0;
	int count = 0,b;
	printf("输入一个数:");
	scanf("%lld", &a);
	tmp = a;
	for (int i = 0; i <= 10; i++) {
		tmp = tmp / 10;
		count++;
		if (tmp == 0) {
			break;
		}
	}
	tmp = a;
	for (int j = 0; j < count; j++) {
		b = tmp % 10;
		tmp=tmp / 10;
		sum = sum+pow(b, count);
	//printf("%lf   ", pow(b, count));
	//printf("%lld\n", sum);
	}
	if (sum == a) {
	printf("%lld", sum);
		printf("是");
	}
	else {
		printf("不是");
	}
	return 0;
}
//int main()
//{
//    long long x;
//    int  p, q, a, b, c, d, e, f, g, h, i, j;
//    printf("x=");
//    scanf("%lld", &x);
//    p = 1;
//    do
//    {
//        q = x / (pow(10, p));
//        p++;
//    } while (q != 0);
//    p = p - 1;
//    j = x % 10;
//    i = (x - j) / 10 % 10;
//    h = (x - j - 10 * i) / 100 % 10;
//    g = (x - j - 10 * i - 100 * h) / 1000 % 10;
//    f = (x - j - 10 * i - 100 * h - 1000 * g) / 10000 % 10;
//    e = (x - j - 10 * i - 100 * h - 1000 * g - 10000 * f) / 100000 % 10;
//    d = (x - j - 10 * i - 100 * h - 1000 * g - 10000 * f - 100000 * e) / 1000000 % 10;
//    c = (x - j - 10 * i - 100 * h - 1000 * g - 10000 * f - 100000 * e - 1000000 * d) / 10000000 % 10;
//    b = (x - j - 10 * i - 100 * h - 1000 * g - 10000 * f - 100000 * e - 1000000 * d - 10000000 * c) / 100000000 % 10;
//    a = (x - j - 10 * i - 100 * h - 1000 * g - 10000 * f - 100000 * e - 1000000 * d - 10000000 * c - 100000000 * b) / 1000000000 % 10;
//    if (pow(a, p) + pow(b, p) + pow(c, p) + pow(d, p) + pow(e, p) + pow(f, p) + pow(g, p) + pow(h, p) + pow(i, p) + pow(j, p) == x)
//        printf("yes");
//    else
//        printf("no");
//    return 0;
//
//
//
//
//
//}