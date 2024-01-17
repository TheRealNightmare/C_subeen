#include <stdio.h>
int main(){
    int x = 100;
    int *p = NULL;
    printf("The value of x: %d\n",x);
    p = &x;
    printf("The value of *p: %d\n",*p);
    return 0;
}