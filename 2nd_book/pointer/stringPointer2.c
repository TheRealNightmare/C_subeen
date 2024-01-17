#include <stdio.h>
int main(){
    char s[] = "Nightmare";
    char *p;
    p = s;
    printf("The value of p: %s\n",p);
    printf("The address of p %p\n",p);
    return 0;
}