#define SIZE 10
#include<stdio.h>
int main() {
	int n=0, num1, num2, num3=0, result[SIZE] = { 0, };
	char arr[SIZE];

	scanf_s("%d %d %d", &num1, &num2, &num3);
	n = num1 * num2 * num3;
	sprintf_s(arr, sizeof(arr), "%d", n);
		
	for (int i = 0; arr[i] != '\0'; i++) {		// ����� ���� ������ ���� �ݺ���
		result[arr[i] - 48]++;					// char�� 0�� int�� 48 �� ���� (�ƽ�Ű�ڵ�)
	}
	
	for (int j = 0; j < SIZE; j++) {				// ���
		printf("%d\n", result[j]);
	}

	getchar(); getchar(); getchar();
	return 0;
}