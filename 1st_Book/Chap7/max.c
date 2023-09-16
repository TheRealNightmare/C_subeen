#include <stdio.h>

int maxe(int arr[], int n){
    int maxe = arr[0];

    int i;
    for(i = 1; i<n; i++){
        if(arr[i]>maxe){
            maxe = arr[i];
        }
    }
    return maxe;
}

int main(){
    int ara[] = {-100,0,53,22,83,300,12,89};
    int n = 8;

    int max = maxe(ara,n);
    printf("%d\n",max);
    return 0;
}