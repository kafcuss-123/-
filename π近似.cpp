#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

int main(void)
{
	int i, num;
	double a;
	double b = 0;
	double value;

	printf("çÄêîn= ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		a = pow(-1, i - 1) / (double(i) * 2 - 1);
		b = b + a;
		value = 4 * b;
		printf("i=%d, value=%g\n", i, value);
	}

	return 0;
}