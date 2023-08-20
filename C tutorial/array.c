#include <stdio.h>

int main()
{
    int myNum[]={2,3,4,5};
    myNum[3]=7;
    int a,b;
    printf("position:");
    scanf(" %d",&a);
    b=a-1;

    printf("%d", myNum[b]);
    return 0;
}