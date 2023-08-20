#include <stdio.h>

int main()
{
    int myage=43;
    int *ptr=&myage;
    printf("%d\n",myage);
    printf("%p\n",ptr);
    printf("%d",*ptr);
    return 0;

}