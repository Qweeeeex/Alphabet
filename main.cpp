#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define maxline 256
#define maxzn 256
#define maxword 48
int main()
{
    using namespace std;
    setlocale(LC_ALL, "RUSSIAN");
    char line[maxline] = { 0 };
    char zn1[maxzn][maxword];
    char* zn2 = NULL;
    char* Alphavit = NULL;
    char sep[] = " , ";
    int k = 0;
    int i;
    char buff[500];
    gets(buff);
    zn2 = strtok_r(buff, sep, &Alphavit);
    strcpy(zn1[k], maxword, zn2);
    while (zn2 != NULL) {
        ++k;
        zn2 = strtok_r(NULL, sep, &Alphavit);
        if (zn2 != NULL) strcpy_s(zn1[k], maxword, zn2);
    }
    printf("\n");
    qsort(zn1, k, maxword, (int(*)(const void*, const void*))strcmp);
    printf("Words in alphabet order: ");
    puts("");
    for (i = 0; i != k; ++i)
        printf("%s \n", zn1[i]);
}