#pragma warning (disable:4996)

#include <stdio.h>
#include <stdlib.h>



void swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;

}

void printValue(int list[]) {
	for (int i = 0; i < _msize(list) / sizeof(int); i++) {
		printf("%d ", list[i]);
	}
}

int main() {

	int n, key;
	int *list;
	int i, j;

	scanf("%d", &n);

	list = (int*)calloc(n, sizeof(int));


	// 배열 값 입력 
	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}

	for ( i = 1; i < n; i++) {
		key = list[i];
		for ( j = i - 1; j > 0 && list[j] > key; j--) {
			list[j + 1] = list[j];
		}
		list[j + 1] = key;
	}
	
	printValue(list);



}