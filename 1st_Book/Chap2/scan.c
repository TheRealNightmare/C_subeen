#include <stdio.h>

int main(){
    int a,b,sum;
    scanf("%d", &a);
    scanf("%d", &b);
    //or scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum is: %d\n", sum);
    return 0;
}