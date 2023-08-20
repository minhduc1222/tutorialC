#include <stdio.h>
#include <stdbool.h>

int main()
{
    int tuoime=33;
    int tuoicon=22;
    if(tuoicon<=tuoime){
        printf("dung vay\n");
    }else{
        printf("kophai\n");
    }

    printf("%d", tuoicon>tuoime);
    return 0;
}
