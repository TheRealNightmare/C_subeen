#include <stdio.h>

int main(){
    char c;
    int i,j,n,x,y;;
    int grid[10][10];
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            grid[i][j] = 1;
        }
    }

    printf("Please enter the number of blocked cell: ");
    scanf("%d", &n);
    printf("Now enter the cells: ");
    for(i=0; i<n; i++){
        scanf("%d %d",&x,&y);
        grid[x][y] = 0;
    }

    printf("Enter the initial position: ");
    scanf("%d %d", &x, &y);
    while(1){
        scanf("%c",&c);
        if(grid[x][y]==1){
            if(c == 'p'){
                break;
            }
            else if(c== 'w'){
                x--;
                printf("postion: %d, %d\n", x,y);
            }
            else if(c== 's'){
                x++;
                printf("postion: %d, %d\n", x,y);
            }
            else if(c== 'a'){
                y--;
                printf("postion: %d, %d\n", x,y);
            }
            else if(c== 'd'){
                y++;
                printf("postion: %d, %d\n", x,y);
            }
        }
        else
        {
            printf("This cell is blocked\n");
            break;
        }
        
    }
    return 0;
}
