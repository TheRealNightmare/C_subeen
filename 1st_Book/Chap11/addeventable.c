#include <stdio.h>

int main(){
    int table[10][10];
    int row,col;
    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
            table[row][col] = (row+1)*(col+1);
        }
    }
    int odd=0;
    int even=0;
    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
            if(table[row][col]%2==0){
                even+=1;
            }
            else{
                odd+=1;
            }
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
}