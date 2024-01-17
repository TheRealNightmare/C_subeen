#include <stdio.h>
int main(){
    char c = 'F';
    char *p,**q;
    p = &c;
    q = &p;

    printf("The value of c: %c\n",c);
    printf("The value of p: %c\n",*p);
    printf("The value of q: %c\n",**q);

    return 0;
}