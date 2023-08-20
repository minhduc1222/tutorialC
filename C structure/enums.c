#include <stdio.h>

enum level{
    low=1,
    medium,
    high
};

int main(){
    enum level myVar= medium;
    switch(myVar){
        case 1:
        printf("%s","low");
        break;
        case 2:
        printf("%s","medium");
        break;
        case 3:
        printf("%s","high");
        break;
    }
    return 0;

}