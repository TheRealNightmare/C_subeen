#include <stdio.h>
int main(){
    int x=10,y;
    int *p, *q;
    p = &x;
    q = &y;
    y = *p;
    *p = 15;
    *q = 20;
    printf("The value x: %d\n",x);
    printf("The value y: %d\n",y);
    printf("The value *p: %d\n",*p);
    printf("The value *q: %d\n",*q);
    return 0;
}