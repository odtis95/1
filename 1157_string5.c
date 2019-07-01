#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 1000000

void strtolower(char *str);
void countchar(char *str, int slen);
int main() {
	int slen;
	char str[SIZE] = { '\0, ' };
	scanf_s("%s", str, SIZE);
	
	slen = strlen(str);
	strtolower(str);
	countchar(str, slen);
	
	getchar(); getchar();
	return 0;

}

void strtolower(char *str) {					// ���ڿ� ��ü�� �ҹ��ڷ� ����
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = tolower(str[i]);
	}
}

void countchar(char *str, int slen) {		// ���ڿ����� ���� ���� ���� ���ڿ� ���
	int count = 0, max = 0;
	char arr[2];										// arr[0],arr[1]�� ���帹�� ���� ���� 
														// arr[1]�� arr[0]�� ���ڿ� �ٸ� ����
	for (int i = 0; i < slen; i++) {				// ���� �ϳ��� �ݺ�
		for (int j = 0; j < slen; j++) {			// i��° ���ڰ� ���ڿ� ��ü���� ��� ���Դ��� ���
			if (str[i] == str[j])
				count++;
		}

		if (max < count) {						// i��° ���ڰ� ���� ���� ���� ���ں��� �� ������
			max = count;							// �ش� ���ڸ� arr[0]�� �ְ� arr[1]�� ���
			arr[0] = str[i];
			if (arr[1] != '\0')
				arr[1] = '\0';
		}
		else if (max == count && arr[0] != str[i]) {				//  ���ڰ� �ٸ��� count�� ���� ��
			arr[1] = str[i];
		}
//		printf("%d, %d, %c %c\n", count, max, arr[0], arr[1]);
		count = 0;
	}

	if (arr[1] != '\0') {							// ���� ���� ���ڰ� ������
		printf("?");
	}
	else {												// 1���϶� �ش� ���ڸ� �빮�ڷ� ��ȯ�Ͽ� ���
		printf("%c", toupper(arr[0]));
	}
}