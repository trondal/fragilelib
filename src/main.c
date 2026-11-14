#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
#include "ref.h"
#include "palindrome.h"
#include "reverse.h"

int main(void) {
	/*int *arr = malloc(sizeof(int) * 10);

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
	printf("%d", result);

	printf("x = %d, y = %d\n", x, y);

	sum_ref(&x, &y);
	printf("x = %d, y = %d\b\n", x, y);*/


	/*printf("%s is palindrome: %s\n", "",  is_palindrome("") ? "true": "false");
	printf("%s is palindrome: %s\n", "aa",  is_palindrome("aa") ? "true": "false");
	printf("%s is palindrome: %s\n", "aba",  is_palindrome("aba") ? "true": "false");
	printf("%s is palindrome: %s\n", "boobo",  is_palindrome("boobo") ? "true": "false");
	printf("%s is palindrome: %s\n", "abba",  is_palindrome("abba") ? "true": "false");
	printf("%s is palindrome: %s\n", "a",  is_palindrome("a") ? "true": "false");*/

	char string[] = "";
	reverse(string);
	printf("string is %s\n", string);

	return EXIT_SUCCESS;
}