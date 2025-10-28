#include <stdio.h>

void swap(int *x, int *y);

int main() {

    printf("__STDC_VERSION__: %ld\n", __STDC_VERSION__);

    int x = 65;
    int *p = &x;

    printf("Value from print: %u\n", x);
    printf("Address of x is: %u\n", x);
    printf("Address of p is: %p\n", p);

    int a = 5;
    int b = 10;

    printf("a is %d\n", a);
    printf("b is %d\n", b);

    // pass int the addresses of a and b
    swap(&a, &b);

    printf("a is now %d\n", a);
    printf("b is now %d\n", b);

    return 0;
}

// function return nothing, just swap in mem. // pass by ref?
void swap(int *a, int *b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}