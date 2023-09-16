#include <stdio.h>

int binary_search(int arr[], int low, int high, int key){
    int mid;

    while(low<=high){
    mid = (low+high)/2;
    if(key == arr[mid]){
        break;
    }
    if(key<arr[mid]){
        high = mid - 1;
    }
    else{
        low = mid + 1;
    }
}

    if(low>high){
        printf("%d is not in the array\n",key);
    }
    else{
        printf("%d is found in the array. It is the %d th element of the array.\n",arr[mid],mid);
    }
}

int main(){
    int ara[] = {1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};

    binary_search(ara,0,15,20);
    return 0;

}