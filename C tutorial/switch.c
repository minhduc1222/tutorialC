#include <stdio.h>

int main()
{
    int num=4;
    switch(num)
    {
    case 1/* constant-expression */:
        printf("chao");/* code */
        break;
    case 2:
        printf("ban");


    default:
        printf("chao ban");
        break;
    }

}