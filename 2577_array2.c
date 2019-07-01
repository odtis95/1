#define SIZE 10
#include<stdio.h>
int main() {
	int n=0, num1, num2, num3=0, result[SIZE] = { 0, };
	char arr[SIZE];

	scanf_s("%d %d %d", &num1, &num2, &num3);
	n = num1 * num2 * num3;
	sprintf_s(arr, sizeof(arr), "%d", n);
		
	for (int i = 0; arr[i] != '\0'; i++) {		// 결과의 숫자 갯수를 세는 반복문
		result[arr[i] - 48]++;					// char형 0은 int형 48 과 같음 (아스키코드)
	}
	
	for (int j = 0; j < SIZE; j++) {				// 출력
		printf("%d\n", result[j]);
	}

	getchar(); getchar(); getchar();
	return 0;
}