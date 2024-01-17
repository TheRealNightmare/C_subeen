#include <stdio.h>
int main(){
    int ara[5] = {1,2,3,4,5};
    printf("Value = %d %d %d %d %d\n",ara[0],ara[1],ara[2],ara[3],ara[4]);
    printf("Address ara = %p\n", ara);
    printf("Address ara[0] = %p\n", &ara[0]);
    printf("Address ara[1] = %p\n", &ara[1]);
    printf("Address ara[2] = %p\n", &ara[2]);
    printf("Address ara[3] = %p\n", &ara[3]);
    printf("Address ara[4] = %p\n", &ara[4]);

    return 0;
}