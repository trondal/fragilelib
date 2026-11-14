#include <string.h>

void reverse(char *string) {
    int length = (int)strlen(string);
    int middle = length / 2;

    for (int i = 0; i < middle; i++) {
        char temp = string[i];
        string[i] = string[length - 1 - i];
        string[length - i - 1] = temp;
    }
}