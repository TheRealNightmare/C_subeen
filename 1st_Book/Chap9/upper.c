#include <stdio.h>

int main(){
    char characters[] = {'b', 'a', 'n', 'g', 'l', 'a', 'd','e','s','h','\0'};
    printf("%s\n", characters);

    int i,length;
    length = 10;

    for(i=0; i<length; i++){
        if(characters[i]>=97 && characters[i]<=122){
            characters[i] = 'A'+ (characters[i]-'a');
        }
    }

    printf("%s", characters);

    return 0;
}