#include "Sort.h"
#include "print.h"

#define maxzn 256
#define maxword 48

int main()
{
    using namespace std;
    setlocale(LC_ALL, "RUSSIAN");
    char zn1[maxzn][maxword];
    int k = 0;
    char buff[500];
    fgets(buff, 500, stdin);
    int x = Sort(buff, zn1, &k);
    if (x == 2) {
        cout << "Unexpected trouble";
        return -1;
    }
    print(zn1, &k);
}
