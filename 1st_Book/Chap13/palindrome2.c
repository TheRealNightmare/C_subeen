#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char word[100];
    int i,j,len;
    int is_palindrome = 0;
    scanf("%s", word);
    len = strlen(word);
    printf("The reverse word is: "); 
    for(i=0,j=len-1;i<len;i++,j--){
        if(word[i]==word[j]){
            is_palindrome = 1;
        }
        else{
            is_palindrome = 0;
        }
        printf("%c",word[j]);
    }
    printf("\n");
    if(1==is_palindrome){
        printf("%s is a palindrome\n",word);
    }
    else{
        printf("%s is not palindrome\n",word);
    }
}