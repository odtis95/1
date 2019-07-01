#include<stdio.h>
#define SIZE 100
int main() {
	int index = -1;
	char S[SIZE];

	scanf_s("%s", &S, SIZE);

	for (int i = 0; S[i] != '\0'; i++) {	// 문자를 비교하여 기존에 있는 문자이면 위치를 저장하고 break
		for (int j = 0; j < i; j++) {
			if (S[i] == S[j]) {
					index = j;
					break;
			}
		}
		printf("%d ", index);		// 알파벳 확인을 한개씩 마칠때마다 해당 알파벳 위치 출력
		index = -1;
	}

	getchar(); getchar();
	return 0;
}
