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
										// 단어 하나를 읽을때 count를 1증가
int countchar(char *str){		// 크로아티아 알파벳은 'c='과 같은 문자열을 한 단어로 셈
	int count = 0;					// 크로아티아 알파벳이면 i값을 증가시켜 1개의 단어로 count함
																				
	for (int i = 0; i < strlen(str); i++) {									
		if (str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-')) {	// c= 또는 c-
			i++;
		}
		else if (str[i] == 'd') {													//
			if (str[i + 1] == 'z' && str[i + 2] == '=')						// dz=
				i = i + 2;
			else if (str[i + 1] == '-')											// d-
				i++;
		}
		else if ((str[i] == 'l' || str[i] == 'n') && str[i + 1] == 'j')		// lj 또는 nj
			i++;
		else if ((str[i] == 's' || str[i] == 'z') && str[i + 1] == '=')	// s= 또는 z=
			i++;

		count++;
	}

	return count;
}