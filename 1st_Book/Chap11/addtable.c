#include <stdio.h>

int main(){
    int table[10][10];
    int row,col;
    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
            table[row][col] = (row+1)*(col+1);
        }
    }
    int total = 0;

    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
            total += table[row][col];
        }
    }
    printf("TOTAL: %d\n",total);
}