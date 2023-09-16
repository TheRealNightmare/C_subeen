#include <stdio.h>

int main(){
    int arra[5] = {3,1,5,2,4};
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(arra[j]>arra[j+1]){
                int temp = arra[j];
                arra[j] = arra[j+1];
                arra[j+1] = temp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d\n", arra[i]);
    }
}