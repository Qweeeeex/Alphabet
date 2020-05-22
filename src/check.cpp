#include "check.h"

int check(char* one, char* two)
{
    const char* str(one);
    const char* str2(two);
    int temp = 0;
    temp = strcmp(one, two);
    if (temp < 0) {
        temp = -1;
    } else if (temp > 0) {
        temp = 1;
    }
    return temp;
}
