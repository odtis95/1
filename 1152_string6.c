#include<stdio.h>

int main() {
	char input[1000000];
	int count = 0, size, i;
	
	fgets(input, sizeof(input), stdin);	// ���ڿ� �Է� �Լ� stdin - ǥ���Է�


	for (i = 0; input[i] != '\0'; i++) {		//�Է¹��� ���ڿ��� ���������� �ݺ�
		if (input[i] == ' ' && input[i - 1] == ' ') {
			perror("double space");
			getchar(); getchar();
			exit(1);
		}
		if (i != 0 && input[i] == ' ') {
			count++;
		}	
	}

	if (input[i-2] != ' ')		// ������ ���ڰ� �������� Ȯ��
		count++;

	printf("%d\n", count);

	getchar(); getchar();
	return 0;
}