#pragma warning (disable:4996)

#include <stdio.h>
#include <stdlib.h>



void swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
	
}

void printValue(int list[]) {
	for (int i = 0; i < _msize(list)/sizeof(int); i++) {
		printf("%d ", list[i]);
	}
}


int main() {

	int n;
	int *list;
	int minIndex;
	int minValue;

	scanf("%d", &n);


	// 배열 동적할당
	list = (int*)calloc(n, sizeof(int));


	// 배열 값 입력 
	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}

	// 선택 정렬 알고리즘 
	for (int i = 0; i < n; i++) {
		minValue = list[i];
		minIndex = i;

		for (int j = i + 1; j < n; j++) {
			if (minValue > list[j]) {
				minValue = list[j];
				minIndex = j;
			}
		}
		swap(&list[i], &list[minIndex]);
	}

	printValue(list);


	free(list);
}