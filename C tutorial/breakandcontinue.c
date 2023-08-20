#include <stdio.h>

int main()
{
    int i;
    for(i=10; i>0; i--){
        if(i==4){
            break;
        }
        printf("so do la:%d\n",i);
    }

    for(i=15; i>0; i--){
        if(i==6){
            continue;
        }
        printf("con so la:%d\n",i);
    }
    return 0;
}