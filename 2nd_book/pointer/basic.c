#include <stdio.h>
int main(){
    int x = 20;
    int *p;
    p = &x;
    printf("*p = %d", *p);
    printf("value of p = %p", p);
    return 0;
}