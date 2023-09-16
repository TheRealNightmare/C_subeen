#include <stdio.h>


double pi = 3.14;

double my_fnc(){
    pi = 3.1416;
    return pi;
}

int main(){
    printf("%lf \n", pi);
    my_fnc();
    printf("%lf \n",pi);
    
    return 0;
}