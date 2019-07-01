#include<stdio.h>

int hansu(int num);

int main() {
	int num, cnt;

	scanf_s("%d", &num);

	cnt = hansu(num);

	printf("%d", cnt);

	getchar();
	getchar();

	return 0;
}

int hansu(int num) {
	int d1, d2, count = 0;

	for (int i = 1; i <= num; i++) {
		if (i < 100)
			count++;
		else {
			d1 = (i / 100) - (i / 10 % 10);
			d2 = (i / 10 % 10) - (i % 10);
			if (d1 == d2)
				count++;
		}
	}
	
	return count;
}