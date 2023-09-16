#include <stdio.h>

int string_length(char str[]){
    int i;
    for(i=0; str[i] != '\0'; i++){
    }
    return i;
}


int main(){
    int length;

    char country[100];
    scanf("%s", country);
    length = string_length(country);
    printf("length = %d\n", length);
    return 0;
}