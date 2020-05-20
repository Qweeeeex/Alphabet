#include "check.h"

int main()
{
    using namespace std;
    setlocale(LC_ALL, "RUSSIAN");
    char zn1[maxzn][maxword];
    char* zn2 = NULL;
    char* Alphavit = NULL;
    char sep[] = " , ";
    int k = 0;
    int i;
    char buff[500];
    fgets(buff, 500, stdin);
    zn2 = strtok_r(buff, sep, &Alphavit);
    strcpy(zn1[k], zn2);
    while (zn2 != NULL) {
        ++k;
        zn2 = strtok_r(NULL, sep, &Alphavit);
        if (zn2 != NULL)
            strcpy(zn1[k], zn2);
    }
    printf("\n");
    qsort(zn1, k, maxword, (int (*)(const void*, const void*))strcmp);
    for (i = 0; i != k - 1; i++) {
	    check(zn1[i], zn1[i + 1]);
    }
    printf("Words in alphabet order: ");
    puts("");
    for (i = 0; i != k; ++i)
        printf("%s \n", zn1[i]);
}
