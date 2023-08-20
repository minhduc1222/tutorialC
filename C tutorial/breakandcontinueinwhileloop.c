#include <stdio.h>

int main(){
    int i;

    while (i<12){
        if(i==8){
            continue;
        }
        printf("do la so:%d\n",i);
        i++;
    }
    return 0;
}