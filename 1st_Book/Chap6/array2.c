#include <stdio.h>

int main(){
    int arra[10] = {0,1,2,3,4,5,6,7,8,9};
    int arra2[10];
    int i,j;
    for(i = 0, j = 9; i<10; i++, j--){
        arra2[j] = arra[i];
    }
    /* 
    for(i = 0; i<10; i++){
        arra[i] = arra2[i];
    }
    */

    for(i = 0; i<10; i++){
        printf("%d\n", arra2[i]);
    }
    return 0;          
}