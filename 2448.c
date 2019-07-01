#include<stdio.h>
//#include<stdlib.h>

void printStar(int line);

int main() {
	int line;
	int 
	scanf_s("%d", &line);

	printStar(line);

	system("pause");
	return 0;
}

void printStar(int line) {
	for (int i = 1; i <= line; i++) {
		for (int j = 1; j <= line - 1; j++) {
			printf(" ");
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			printf("*");
		}
		printf("\n");
	}
}