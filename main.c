#include <stdio.h>

int main() {

    printf("__STDC_VERSION__: %ld\n", __STDC_VERSION__);

    int x = 65;
    int *p = &x;

    printf("Value from print: %u\n", x);
    printf("Address of x is: %u\n", x);
    printf("Address of p is: %p\n", p);

    return 0;
}