#include<stdio.h>

void cmpnum(int num1, int num2);

int main() {
	int num1, num2;

	scanf_s("%d %d", &num1, &num2);

	cmpnum(num1, num2);

	getchar(); getchar();
	return 0;
}

void cmpnum(int num1, int num2) {
	num1 = ((num1 % 10) * 100) + ((num1 % 100 / 10) * 10) + (num1 / 100);
	num2 = ((num2 % 10) * 100) + ((num2 % 100 / 10) * 10) + (num2 / 100);

	if (num1 > num2)
		printf("%d", num1);
	else
		printf("%d", num2);
}