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

void strtolower(char *str) {					// 문자열 전체를 소문자로 변경
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = tolower(str[i]);
	}
}

void countchar(char *str, int slen) {		// 문자열에서 가장 많이 나온 문자열 출력
	int count = 0, max = 0;
	char arr[2];										// arr[0],arr[1]는 가장많이 나온 문자 
														// arr[1]은 arr[0]의 문자와 다른 문자
	for (int i = 0; i < slen; i++) {				// 문자 하나씩 반복
		for (int j = 0; j < slen; j++) {			// i번째 문자가 문자열 전체에서 몇번 나왔는지 계산
			if (str[i] == str[j])
				count++;
		}

		if (max < count) {						// i번째 문자가 가장 많이 나온 문자보다 더 많을때
			max = count;							// 해당 문자를 arr[0]에 넣고 arr[1]을 비움
			arr[0] = str[i];
			if (arr[1] != '\0')
				arr[1] = '\0';
		}
		else if (max == count && arr[0] != str[i]) {				//  문자가 다르고 count가 같을 때
			arr[1] = str[i];
		}
//		printf("%d, %d, %c %c\n", count, max, arr[0], arr[1]);
		count = 0;
	}

	if (arr[1] != '\0') {							// 가장 많은 문자가 여러개
		printf("?");
	}
	else {												// 1개일때 해당 문자를 대문자로 변환하여 출력
		printf("%c", toupper(arr[0]));
	}
}