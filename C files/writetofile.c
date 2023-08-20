#include <stdio.h>

int main(){
    FILE *fpt;
    fpt  = fopen("abc.txt","a");
    fprintf(fpt,"dsaaa");
    fclose(fpt);
}