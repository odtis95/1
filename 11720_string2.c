#include<stdio.h>
#define SIZE 100
int main() {
	int max, sum = 0;
	char str[SIZE] = {'\0, '};
	
	scanf_s("%d", &max);
	scanf_s("%s", str, max+1);	// 문자열 마지막에 '\0'이 들어가므로 max+1

	for (int i = 0; i < max; i++) {
		sum += str[i] - 48;			// char형 숫자를 아스키코드표에 따라 -48을 해서 정수로 변경하여 더함
	}

	printf("%d", sum);

	getchar(); getchar();

	return 0;
}