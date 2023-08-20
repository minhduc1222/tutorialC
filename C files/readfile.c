#include <stdio.h>

int main(){
    FILE *fpt;
    fpt=fopen("abcd.txt","a");
    fprintf(fpt,"asdf\n");
    fpt=fopen("abcd.txt","r");

    char myString[100];
    while(fgets(myString, 100, fpt)){
        printf("%s",myString);
    }
    fclose(fpt);
}