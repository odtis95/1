#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *sort();				// 오름차순 정렬

int main() {				
	int count = 0, *ptr;			// 동적할당된 selfnum의 주소를 저장할 ptr
	int *selfnum = (int*)malloc(sizeof(int)*10000);		

	ptr = selfnum;					

	for (int i = 1; i < 10000; i++) {			
		if (i < 10) {								
			*selfnum = i + i;
		}
		else if (i >= 10 && i < 100) {
			*selfnum = i + (i / 10) + (i % 10);
		}
		else if (i >= 100 && i < 1000) {
			*selfnum = i + (i / 100) + (i / 10 % 10) + (i % 100);
		}
		else if (i >= 1000 && i < 10000) {
			*selfnum = i + (i / 1000) + (i / 100 % 10) + (i / 10 % 10) + (i % 10);
		}
		selfnum++;
		count++;
	}

	selfnum -= count;			// 시작주소로 돌아감
	selfnum = sort(selfnum, count);		//	정렬


	for (int i = 1; i <= 10000; i++) {		// 셀프넘버가 아닌 숫자를 출력
		if (i != *selfnum) {
			printf("%d\n", i);
		}
		else {
			selfnum++;
		}
	}
	getchar();
	free(ptr);
	return 0;
}

int *sort(int *num, int count) {	// 버블정렬 오름차순
	int temp = 0, *num2 = NULL;

	for (int i = 0; i < (count - 1); i++) {

		for (int j = 0; j < (count - i - 1); j++) {
			if (*(num + j) > *(num + j + 1)) {
				temp = *(num + j);
				*(num + j) = *(num + j + 1);
				*(num + j + 1) = temp;
			}
			else if (*(num + j) == *(num + j + 1)) { // 정렬도중 같은 숫자가 나오면 한칸 이동하여 삭제
				memmove(num + j, num + j + 1, (_msize(num)/4)-j);		
			}
			num2 = num + j;
		}
	}
	return num2;
}