#include <stdio.h>
int main(){
    char small_char, capital_char;
    printf("Enter small char: ");
    small_char = getchar();
    capital_char = small_char - 32;
    printf("The Capital letter is %c\n",capital_char);
    return 0;
}