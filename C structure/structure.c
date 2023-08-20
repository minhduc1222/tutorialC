#include <stdio.h>
#include <string.h>

struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];

};

int main(){
    struct myStructure s1;
    s1.myLetter ='a';
    s1.myNum=2;
    strcpy(s1.myString,"abc");
    printf("my Number:%d\nMy Letter:%c\nMy String:%s",s1.myNum,s1.myLetter,s1.myString);
}
