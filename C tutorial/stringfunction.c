#include <stdio.h>
#include <string.h>

int main()
{
    char alphabet[]="abcde";
    printf("%d\n", strlen(alphabet));

    //concatenate thing

    char str1[]="Hello";
    char str2[]="Hello";
    char str3[]="Hi";
    char str4[20];
    strcat(str1,str3); //str3 hop nhat voi str1
    printf("%s\n",str1);

    //copy strings
    strcpy(str4, str3);
    printf("%s",str4);

    //compare strings
    printf("%d\n",strcmp(str1,str2));//return to 1-->equal
    printf("%d\n", strcmp(str2,str3));//return to 0-->unequal

    

}