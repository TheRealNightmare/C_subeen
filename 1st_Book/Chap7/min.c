#include <stdio.h>

int mini(int arr[], int n){
    int min = arr[0];
    int i;
    for(i=1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr []= {-100,0,53,22,82,23,-89,-132,201,3,85};
    int n = 11;

    int min = mini(arr,n);
    printf("%d\n", min);

    return 0;
}
