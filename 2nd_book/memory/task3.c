#include <stdio.h>
int main(){
    char x;
    x = getchar();
    if(x>47 && x<58){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}