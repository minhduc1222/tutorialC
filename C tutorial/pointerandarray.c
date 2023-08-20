#include <stdio.h>

int main()
{
     //pointer relate to array
    int mynum[]={1,2,3,4};
    printf("%p\n",mynum);
    printf("%p\n",&mynum[0]);

   //truy xuat du lieu
    printf("%d\n",*mynum);
    printf("%d\n",*(mynum+1));

    //loop through

    int *ptr=mynum;
    int i;
    for(i=0;i<4;i++){
        printf("%d\n",*(ptr+i));
    
    //change value of array element = pointer
    *mynum =5;
    *(mynum+1)=3;
    printf("%d\n", *mynum);
    printf("%d\n", *(mynum+1));


    }
}