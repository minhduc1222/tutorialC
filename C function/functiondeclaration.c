#include <stdio.h>

int myFunction(int x, int y) {
  return x + y;
}

void myFunction2();
int myFunction3(int,int);

int main() {  
  int result = myFunction(5, 3); 
  printf("Result is = %d\n", result);
  myFunction2();
  int result3=myFunction3(3,5);
  printf("Result is =%d",result3);
  return 0;
}

void myFunction2(){
    printf("abc");
}

int myFunction3(int x, int y){
    return x+y;
}

