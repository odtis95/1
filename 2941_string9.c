#include<stdio.h>
#include<string.h>
#define SIZE 100

int main() {
	int count;
	char str[SIZE];

	scanf_s("%s", str, SIZE);
	
	count = countchar(str);
	printf("%d", count);
	
	getchar(); getchar();
	return 0;
}
										// �ܾ� �ϳ��� ������ count�� 1����
int countchar(char *str){		// ũ�ξ�Ƽ�� ���ĺ��� 'c='�� ���� ���ڿ��� �� �ܾ�� ��
	int count = 0;					// ũ�ξ�Ƽ�� ���ĺ��̸� i���� �������� 1���� �ܾ�� count��
																				
	for (int i = 0; i < strlen(str); i++) {									
		if (str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-')) {	// c= �Ǵ� c-
			i++;
		}
		else if (str[i] == 'd') {													//
			if (str[i + 1] == 'z' && str[i + 2] == '=')						// dz=
				i = i + 2;
			else if (str[i + 1] == '-')											// d-
				i++;
		}
		else if ((str[i] == 'l' || str[i] == 'n') && str[i + 1] == 'j')		// lj �Ǵ� nj
			i++;
		else if ((str[i] == 's' || str[i] == 'z') && str[i + 1] == '=')	// s= �Ǵ� z=
			i++;

		count++;
	}

	return count;
}