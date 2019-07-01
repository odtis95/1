#include<stdio.h>
#include<string.h>
#define SIZE 100

int countgroup(char str[][SIZE], int num);

int main() {
	int num, group;
	char str[SIZE][SIZE];

	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf_s("%s", str[i], SIZE);
	}

	group = countgroup(str, num);
	printf("%d", group);

	getchar(); getchar();
	return 0;
}

int countgroup(char str[][SIZE], int num) {	//arr�� ���ڿ����� ���� ���� ���ڸ� �����Ͽ� �׷� �ܾ����� üũ
	int count = 0, state;								// state == 1�̸� �׷�ܾ �ƴ�
	char arr[SIZE];

	for (int i = 0; i < num; i++) {					//str�� i��° ���ڿ�
		state = 0;
		count++;											
		memset(arr, '\0', SIZE);

		for (int j = 0; j < strlen(str[i]); j++) {	
			for (int k = 0; k < strlen(arr); k++) {
				if (arr[k] == str[i][j]) {				// str[i][j]��ġ�� ���ڸ� arr�� ����� ���ڿ� ��
					count--;								// �׷�ܾ �ƴϹǷ� +1�ߴ� count�� -1
					state = 1;							// state = 1�� ����� �׷�ܾ �ƴ��� üũ
					break;
				}
			}
			if (state == 1) {							// �׷�ܾ �ƴϸ�
				break;									// �ݺ� ����, ���� ���ڿ��� �Ѿ
			}
			else if (state == 0 && str[i][j] != str[i][j + 1])	// str�� ���� ���ڰ� ���� ��ġ�� ���ڿ� �������� ������ 
				arr[strlen(arr)] = str[i][j];			// arr�� ��������ġ�� ���� ���ڸ� ����
		}
	}

	return count;
}