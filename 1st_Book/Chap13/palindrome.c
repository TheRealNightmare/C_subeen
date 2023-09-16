#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char word[100], reverse[100];
    int i,j,len;
    scanf("%s", word);
    len = strlen(word);
    for(i=0,j=len-1;i<len;i++,j--){
        reverse[i] = word[j];
    }
    reverse[i] = '\0';
    printf("%s\n", reverse);
    if(0==strcmp(word,reverse)){
        printf("%s is a palindrome\n",word);
    }
    else{
        printf("%s is not a palindrome.\n",word);
    }
    return 0;
}