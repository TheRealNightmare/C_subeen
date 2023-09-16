#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int prime[100] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int ara[100];
    int x,i,j,y,z=0,k;
    int num[100];
    int count[100];
    int total=1;

    for(i=0;i<100;i++){
        count[i] = 0;
    }
    
    scanf("%d", &x);

    for(i=x;i>=1;i--){
        total = total*i;
    }

    for(i=0,j=0;total>1;i++){
        while(total%prime[i]==0){
            int y = total/prime[i];
            ara[j++] = prime[i];
            total = y;
        }
    }

    for(i=0;i<j;i++){
        for(k=0;k<z;k++){
            if(ara[i]==num[k]){
                count[k]++;
                break;
            }
        }
        if(k==z){
            num[z] = ara[i];
            count[z] = 1;
            z++;
        }
    }

    for(i=0;i<z; i++){
        if(count[i]>0){
            printf("(%d,%d)",num[i],count[i]);
            if(i<z-1){
                printf(",");
            }
        }
    }
    printf("\n");
    return 0;
}