#include<stdio.h>
#define SIZE 100
int main() {
	int max, sum = 0;
	char str[SIZE] = {'\0, '};
	
	scanf_s("%d", &max);
	scanf_s("%s", str, max+1);	// ���ڿ� �������� '\0'�� ���Ƿ� max+1

	for (int i = 0; i < max; i++) {
		sum += str[i] - 48;			// char�� ���ڸ� �ƽ�Ű�ڵ�ǥ�� ���� -48�� �ؼ� ������ �����Ͽ� ����
	}

	printf("%d", sum);

	getchar(); getchar();

	return 0;
}