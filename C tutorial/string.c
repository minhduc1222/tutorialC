#include <stdio.h>

int main()
{
    int i;
    char greeting[]={"Hello"};
    printf("%s\n", greeting);
    for(i=0; i<5; i++){
        printf("chu cai:%c\n", greeting[i]);
    }
}