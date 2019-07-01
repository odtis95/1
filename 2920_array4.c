#define SIZE 8
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char arr[SIZE * 2], *ptr, *context, count = 0;
	int num[SIZE], i = 0;

	fgets(arr, sizeof(arr), stdin);

	ptr = strtok_s(arr, " ", &context);

	while (ptr != NULL) {
		num[i++] = atoi(ptr);
		ptr = strtok_s(NULL, " ", &context);
	}

	for (i = 0; i < SIZE; i++) {
		if (num[0] == 8) {
			if ((num[i] - 1) == num[i + 1])
				count++;
			else
				break;
		}
		else if (num[0] == 1) {
			if ((num[i] + 1) == num[i + 1])
				count++;
			else
				break;
		}
		else {
			break;
		}
	}

	if (count != 7) {
		printf("MIXED");
	}
	else {
		if (num[0] == 8)
			printf("descending");
		else if (num[0] == 1)
			printf("ascending");
	}
	
	getchar(); getchar();
	return 0;
}