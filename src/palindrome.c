#include <stdbool.h>
#include <string.h>

bool is_palindrome(char str[]) {
    int len = (int) strlen(str);
    int middle = (int) len / 2;
    
    for (int i = 0; i < middle; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}