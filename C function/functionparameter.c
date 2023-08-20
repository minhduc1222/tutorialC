#include <stdio.h>

void myFunction(char name[])
{
    printf("Hello %s\n",name);

}
void myFunction2(int myNum[5]){//pass arrays as function parameter
    for(int i=0; i<4; i++){
        printf("%d\n",myNum[i]);
    }
}
int main()//multiple parameter
{
    int myNum[5]={10,20,30,40,50};
    myFunction("Janna");
    myFunction("stacker");
    myFunction2(myNum);
    return 0;
}




