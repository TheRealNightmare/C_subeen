#include <stdio.h>
int main(){
    int ara[5] = {3,1,5,2,4};
    int ara2[5]; 
    int i,j,minimum,index;
    for(i=0;i<5;i++){
        minimum = 1000;
        for(j=0;j<5;j++){
            if(ara[j]<minimum){
                minimum = ara[j];
                index = j;
            }
        }
        ara[index] = 1000;
        ara2[i] = minimum;
    }
    for(i=0;i<5;i++){
        printf("%d\n",ara2[i]);
    }
    return 0;
}