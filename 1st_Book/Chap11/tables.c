#include <stdio.h>

int main(){
    int table[10][10];
    int row, col;

    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
            table[row][col] = (row+1)*(col+1);
        }
    }

    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
            printf("%d X %d = %d\n", (row+1),(col+1),table[row][col]);
        }
        printf("\n");
    }
    return 0;
}