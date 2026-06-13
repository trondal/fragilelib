#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
#include "ref.h"

int main()
{
	int *arr = malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++) {
		arr[i] = i;
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 15; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	int x = 5;
	int y = 10;
	int result = sum(x, y);

	printf("x = %d, y = %d\n", x, y);

	sum_ref(&x, &y);
	printf("x = %d, y = %d\b\n", x, y);
}