#include<stdio.h>
#include<string.h>
int main() {
	char arr[80];
	int c, score = 1, sum = 0, result[10];

	scanf_s("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf_s("%s", arr, sizeof(arr));
		for (int k = 0; k < strlen(arr); k++) {
			if (arr[k] == 'O') {
				sum += score++;
			}
			else {
				score = 1;
			}
		}
		result[i] = sum;
		sum = 0;
		score = 1;
		memset(arr, '\0', sizeof(arr));
	}
	for (int i = 0; i < c; i++) {
		printf("%d\n", result[i]);
	}
	getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
	return 0;
}