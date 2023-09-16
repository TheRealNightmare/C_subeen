#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n<0){
        printf("The number is negetive");
    }
    else if(n>0){
        printf("The number is positive");
    }
    else{
        printf("The number is Zero");
    }

    /* OR
    else if(n==0){
        printf("The number is Zero");
    }
    */
   return 0; 
}