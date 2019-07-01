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

int countgroup(char str[][SIZE], int num) {	//arr에 문자열에서 현재 사용된 문자를 저장하여 그룹 단어인지 체크
	int count = 0, state;								// state == 1이면 그룹단어가 아님
	char arr[SIZE];

	for (int i = 0; i < num; i++) {					//str의 i번째 문자열
		state = 0;
		count++;											
		memset(arr, '\0', SIZE);

		for (int j = 0; j < strlen(str[i]); j++) {	
			for (int k = 0; k < strlen(arr); k++) {
				if (arr[k] == str[i][j]) {				// str[i][j]위치의 문자를 arr에 저장된 문자와 비교
					count--;								// 그룹단어가 아니므로 +1했던 count를 -1
					state = 1;							// state = 1로 만들어 그룹단어가 아님을 체크
					break;
				}
			}
			if (state == 1) {							// 그룹단어가 아니면
				break;									// 반복 중지, 다음 문자열로 넘어감
			}
			else if (state == 0 && str[i][j] != str[i][j + 1])	// str의 현재 문자가 다음 위치의 문자와 동일하지 않으면 
				arr[strlen(arr)] = str[i][j];			// arr의 마지막위치에 현재 문자를 저장
		}
	}

	return count;
}