#include <stdio.h>
int main(){
    double x_plus_y, x_minus_y, x, y;

    printf("Enter the value of x+y: ");
    scanf("%lf", &x_plus_y);

    printf("Enter the value of x-y: ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y)/2;
    y = (x_plus_y - x_minus_y)/2;

    printf("X = %.2lf, Y = %.2lf\n", x,y);
    return 0;
}