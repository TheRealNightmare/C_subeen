#include <stdio.h>

int main(){
    int ara[5][5] = {
        {1,2,3,4,5},
        {10,20,30,40,50},
        {100,200,300,400,500},
        {1000,2000,3000,4000,5000},
        {10000,20000,30000,40000,50000}
    };
    int ara2[5][5];
    int r,c;

    printf("Content of the first array: \n");
    for(r=0;r<5;r++){
        for(c=0;c<5;c++){
            printf("%d ", ara[r][c]);
        }
        printf("\n");    
    }
    printf("\n");

    for(r=0;r<5;r++){
        for(c=0;c<5;c++){
            ara2[c][r] = ara[r][c];
        }
    }

    printf("Content of second array: \n");
    for(r=0;r<5;r++){
        for(c=0;c<5;c++){
            printf("%d ", ara2[r][c]);
        }
        printf("\n");
    }
    return 0;
}