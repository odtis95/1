#include<stdio.h>
#define SIZE 100
int main() {
	int index = -1;
	char S[SIZE];

	scanf_s("%s", &S, SIZE);

	for (int i = 0; S[i] != '\0'; i++) {	// ���ڸ� ���Ͽ� ������ �ִ� �����̸� ��ġ�� �����ϰ� break
		for (int j = 0; j < i; j++) {
			if (S[i] == S[j]) {
					index = j;
					break;
			}
		}
		printf("%d ", index);		// ���ĺ� Ȯ���� �Ѱ��� ��ĥ������ �ش� ���ĺ� ��ġ ���
		index = -1;
	}

	getchar(); getchar();
	return 0;
}
