#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int i,x;
    long long int total=1;
    scanf("%d", &x);
    for(i=x;i>=1;i--){
        total = total*i;
    }
    printf("Total = %lld\n", total);
    return 0;
}