#include <stdio.h>

int main(){
    int x,y;
    char c;
    printf("Enter the initial position: ");
    scanf("%d %d", &x, &y);
    while(1){
        scanf("%c",&c);
        if(c == 'p'){
            break;
        }
        else if(c== 'w'){
            x--;
        }
        else if(c== 's'){
            x++;
        }
        else if(c== 'a'){
            y--;
        }
        else if(c== 'd'){
            y++;
        }
    }
    printf("Final postion of the robot is:%d, %d\n",x,y);
    return 0;
}