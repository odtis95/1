#include<stdio.h>
#include<string.h>
#define SIZE 20
#define T_MAX 1000

int main() {
	int T, R, index=0;
	char S[SIZE];
	char P[T_MAX][SIZE] = { '\0' };

	scanf_s("%d", &T);


	for (int i = 0; i < T; i++) {				// i는 테스트 케이스 개수
		memset(S, '\0', SIZE);
		scanf_s("%d %s", &R, S, SIZE);
		for (int j = 0; S[j] != '\0'; j++) {			// j는 문자열 인덱스
			for (int k = 0; k < R; k++) {					// k는 케이스 반복 횟수
				P[i][index++] = S[j];
			}
		}
		index = 0;
	}
	printf("\n");
	for (int i = 0; P[i][0] != '\0'; i++) {
		printf("%s\n", P[i]);
	}
	

	getchar(); getchar();
	return 0;
}