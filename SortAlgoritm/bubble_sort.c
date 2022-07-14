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

	int n;
	int *list;

	scanf("%d", &n);

	list = (int*)calloc(n, sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n-i; j++) {
			if (list[j-1] > list[j]) swap(&list[j], &list[j -1]);
		}
	}
	
	printValue(list);
}


