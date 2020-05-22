//
// Created by Qweex on 22.05.2020.
//
#include "Sort.h"
#include "check.h"

int Sort(char* buff, char (&zn1)[maxzn][maxword], int *k) {
    char* zn2 = NULL;
    char* Alphavit = NULL;
    char sep[] = " ";
    int i;
    zn2 = strtok_r(buff, sep, &Alphavit);
    strcpy(zn1[*k], zn2);
    while (zn2 != NULL) {
        *k = *k + 1;
        zn2 = strtok_r(NULL, sep, &Alphavit);
        if (zn2 != NULL)
            strcpy(zn1[*k], zn2);
    }
    qsort(zn1, *k, maxword, (int (*)(const void*, const void*))strcmp);
    for (i = 0; i != *k - 1; i++) {
        int x = check(zn1[i], zn1[i + 1]);
        if (x == 1) {
            cout << "Unexpected trouble";
            return 2;
        }
    }
    return 0;
}