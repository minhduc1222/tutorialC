#include <stdio.h>

int main() {
  int time = 20;
  if (time < 18) {
    printf("Good day.");
  } 
  else if(time >15 && time<18 ){
    printf("good afternoon");
  }
    else {
    printf("Good evening.");
  }
  return 0;
}