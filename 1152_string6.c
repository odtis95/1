#include<stdio.h>

int main() {
	char input[1000000];
	int count = 0, size, i;
	
	fgets(input, sizeof(input), stdin);	// 문자열 입력 함수 stdin - 표준입력


	for (i = 0; input[i] != '\0'; i++) {		//입력받은 문자열이 끝날때까지 반복
		if (input[i] == ' ' && input[i - 1] == ' ') {
			perror("double space");
			getchar(); getchar();
			exit(1);
		}
		if (i != 0 && input[i] == ' ') {
			count++;
		}	
	}

	if (input[i-2] != ' ')		// 마지막 문자가 공백인지 확인
		count++;

	printf("%d\n", count);

	getchar(); getchar();
	return 0;
}