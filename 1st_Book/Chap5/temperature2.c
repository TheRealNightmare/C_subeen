#include <stdio.h>

int main(){
    double celsius,farenheit;
    printf("Enter temperature in farenheit: ");
    scanf("%lf", &farenheit);

    celsius = (farenheit-32)/1.8;

    printf("The temperature in celsius is: %lf", celsius);

    return 0;
} 