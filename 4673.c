#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *sort();				// �������� ����

int main() {				
	int count = 0, *ptr;			// �����Ҵ�� selfnum�� �ּҸ� ������ ptr
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

	selfnum -= count;			// �����ּҷ� ���ư�
	selfnum = sort(selfnum, count);		//	����


	for (int i = 1; i <= 10000; i++) {		// �����ѹ��� �ƴ� ���ڸ� ���
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

int *sort(int *num, int count) {	// �������� ��������
	int temp = 0, *num2 = NULL;

	for (int i = 0; i < (count - 1); i++) {

		for (int j = 0; j < (count - i - 1); j++) {
			if (*(num + j) > *(num + j + 1)) {
				temp = *(num + j);
				*(num + j) = *(num + j + 1);
				*(num + j + 1) = temp;
			}
			else if (*(num + j) == *(num + j + 1)) { // ���ĵ��� ���� ���ڰ� ������ ��ĭ �̵��Ͽ� ����
				memmove(num + j, num + j + 1, (_msize(num)/4)-j);		
			}
			num2 = num + j;
		}
	}
	return num2;
}