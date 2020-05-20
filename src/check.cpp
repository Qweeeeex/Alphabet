#include "check.h"

int check(char *one, char *two)
{
    int temp = 0;
    temp = strcmp(one, two);
    if (temp < 0 || temp > 0) {
        temp = 1;
    }
    
    return temp;
}
