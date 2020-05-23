#include "print.h"

void print(char (&zn1)[maxzn][maxword], int* k)
{
    cout << "Words in alphabet order:" << endl;
    for (int i = 0; i != *k; i++) {
        for (int j = 0; zn1[i][j] != '\0'; j++) {
            if ((zn1[i][j] != '\n') && (zn1[i][j] != '\0') && (zn1[i][j] != '.')
                && (zn1[i][j] != ',') && (zn1[i][j] != ':')
                && (zn1[i][j] != ';') && (zn1[i][j] != '!')
                && (zn1[i][j] != '?'))
                cout << zn1[i][j];
            zn1[i][j] = 0;
        }
        cout << endl;
    }
}
