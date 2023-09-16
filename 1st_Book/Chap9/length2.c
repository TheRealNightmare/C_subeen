#include <stdio.h>

int string_length(char str[]){
    int i;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    char string[25];
    scanf("%s", string);
    int length = string_length(string);
    printf("Length %d", length);
    return 0;
}