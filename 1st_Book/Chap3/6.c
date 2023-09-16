#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("%c is a vowel\n", c);
    }
    else{
        printf("%c is a consonant\n", c);
    }
}