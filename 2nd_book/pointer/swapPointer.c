#include <stdio.h>
int main(){
    int x=10,y;
    int *p;
    printf("The value of x: %d\n",x);
    p = &x;
    y = *p;
    *p = 15;
    printf("The value of x: %d\n",x);
    printf("The value of y: %d\n",y);
    printf("The value of *p: %d\n",*p);
    printf("The address of x: %p\n",&x);
    printf("The address of y: %p\n",&y);
    printf("The value of p: %p\n",p);
    return 0;
}