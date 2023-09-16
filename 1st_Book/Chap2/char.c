#include <stdio.h>

int main(){
    char ch;
    printf("Enter the first character of your name: ");
    scanf("%c" ,&ch);
    //or ch = getchar();
    printf("The first letter of your name is: %c\n", ch);
    return 0;
}