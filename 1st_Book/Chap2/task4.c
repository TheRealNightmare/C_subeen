#include <stdio.h>

int main(){
    double x,y,sum;
    x = 3.4;
    y = 5.1;
    sum = x + y;
    printf("Sum is: %lf\n",sum);
    printf("Sum is: %.2lf\n",sum);
    return 0;
}