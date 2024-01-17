#include <stdio.h>
int main(){
    char a = 'A';
    char *p;
    p = &a;
    printf("The value: %c\n",*p);
    return 0;
}