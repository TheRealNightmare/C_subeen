#include <stdio.h>

int is_prime(int n){
    int i;

    if(n<2){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    for(i=3; i<=n/2; i=i+2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);

    if(1==is_prime(n)){
        printf("%d is a prime number.\n",n);
    }
    else{
        printf("%d is not prime number\n",n);
    }
    return 0;
}