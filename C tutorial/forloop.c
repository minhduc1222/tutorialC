#include <stdio.h>

int main(){
    int i;
    int j;
    for (i=5; i>0; i--){
        printf("do la:%d\n",i);
        for(j=3; j>0; j--){
            printf("phai la:%d\n",j);
        }
    }
    return 0;
}