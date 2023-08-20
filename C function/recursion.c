#include <stdio.h>

int sum(int k);

int main(){
    int result =sum(10);//1.tham so dc gan gia tri 10
    printf("%d",result);
    return 0;
}
int sum(int k){
    if (k>0){
        return k+sum(k-1);//2.tham so giam dan theo dieu kien
    }else{
        return 0;
    }
}
/*no se la
10
10+sum(9)
10+9+sum(8)
10+9+8+sum(7)
...
10+...0=55*/
             