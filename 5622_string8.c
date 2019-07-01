#include<stdio.h>
#include<string.h>
#define SIZE 15

int totaltime(char *str);

int main() {
	int time;
	char str[SIZE] = { '\0' };
	
	scanf_s("%s", str, SIZE);

	time = totaltime(str);
	printf("%d", time);

	getchar(); getchar();
	return 0;
}

int totaltime(char *str) {
	int count = 0, slen;
	
	slen = strlen(str);
	
	for (int i = 0; i < slen; i++) {
		switch (str[i]) {
		case 'A': case 'B': case 'C':
			count += 2; break;			
		case 'D': case 'E': case 'F':
			count += 3; break;			
		case 'G': case 'H': case 'I':
			count += 4; break;			
		case 'J': case 'K': case 'L':
			count += 5; break;			
		case 'M': case 'N': case 'O':
			count += 6; break;
		case 'P': case 'Q': case 'R': case 'S':
			count += 7; break;
		case 'T': case 'U': case 'V':
			count += 8; break;
		case 'W': case 'X': case 'Y': case 'Z':
			count += 9; break;
		}
	}
	count += slen;

	return count;
}