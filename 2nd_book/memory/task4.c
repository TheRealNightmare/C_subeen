#include <stdio.h>
int main(){
    char a = 'A', b = 'B';
    int x = 100, y = 10000;
    printf("the char %c\n",a);
    printf("the address %p\n", &a);
    printf("the char %c\n",b);
    printf("the address %p\n", &b);
    printf("the int %d\n",x);
    printf("the address %p\n", &x);
    printf("the int %d\n",y);
    printf("the address %p\n",&y);
    return 0;
}