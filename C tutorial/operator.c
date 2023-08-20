#include <stdio.h>

int main()
{
    int myint;
    double mydouble;
    float myfloat;
    char mychar;
    printf("%lu\n", sizeof(myint));
    printf("%lu\n", sizeof(myfloat));
    printf("%lu\n", sizeof(mychar));
    printf("%lu", sizeof(mydouble));
    return 0;
}