#include <stdio.h>
int main(){
    char a = 'A';
    char *p;
    p = &a;
    printf("The address of a : %p\n", p);
    printf("The address of p : %p\n",&p);
    return 0;
}