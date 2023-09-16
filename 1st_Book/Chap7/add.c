#include <stdio.h>

double add(double x, double y){
    double sum = x+y;
    return sum;
}

int main(){
    double a,b,c;
    scanf("%lf %lf", &a, &b);
    c = add(a,b);
    printf("The sum is: %.2lf", c);
}