#include "biblio.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <fstream>
#include <iomanip>
#define maxline 256
#define maxzn 256
#define maxword 48
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char line[maxline] = { 0 };
	char zn1[maxzn][maxword];
	char* zn2 = NULL;
	char* Alphavit = NULL;
	char sep[] = " , ";
	int k = 0;
	int i;
	char buff[500];
	ifstream fin("data.txt");
	fin.getline(buff, 500);
	zn2 = strtok_s(buff, sep, &Alphavit);
	strcpy_s(zn1[k], maxword, zn2);
	while (zn2 != NULL) {
		++k;
		zn2 = strtok_s(NULL, sep, &Alphavit);
		if (zn2 != NULL) strcpy_s(zn1[k], maxword, zn2);
	}
	printf("\n");
	qsort(zn1, k, maxword, (int(*)(const void*, const void*))strcmp);
	printf("Фамилии в алфавитном порядке: ");
	puts("");
	for (i = 0; i != k; ++i) {
		printf("%s ", zn1[i]);
		puts("");
	}
}
