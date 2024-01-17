#include <stdio.h>
int main(){
    int x = 10;
    int *p;
    p = &x;
    printf("The value of x = %d\n",x);
    *p = 20;
    printf("The value of x = %d\n",x);
    printf("The address of x = %p\n",&x);
    printf("The address of p = %p\n",p);
    return 0;
}