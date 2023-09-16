#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char bin[100];
    int d,i;
    scanf("%d", &d);
    i = 0;
    while(d>0){
        bin[i] = (d%2) + '0';
        d /= 2;
        i++;
    }
    int len = strlen(bin);
    printf("Binary: ");
    for(i=len-1;i>=0;i--){
        printf("%c",bin[i]);
    }
    printf("\n");
    return 0;
}