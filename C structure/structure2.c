#include <stdio.h>
#include <string.h>

struct myStructure{
    int myNum;
    char myletter;
    char myString[30];
};

int main(){
    struct myStructure s1={30, 'b', "abc"};
    printf("%d%c%s",s1.myNum,s1.myletter,s1.myString);
}