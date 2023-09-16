#include <stdio.h>

int binary_search(int arr[], int upper, int lower, int ans) {
    int mid;
    while (upper >= lower) {
        mid = (upper + lower) / 2;

        if (ans == arr[mid]) {
            printf("%d is found in the array. It is the %dth element of the array.\n", arr[mid], mid);
            return mid; 
        }

        if (ans < arr[mid]) {
            upper = mid - 1;  
        } else {
            lower = mid + 1;  
        }
    }

    printf("%d is not found in the array.\n", ans);
    return -1;  
}

int main() {
     int array[] = {
    45, 72, 18, 96, 37, 63, 82, 9,  55, 23,
    81, 29, 61, 14, 50, 89, 5,  31, 68, 10,
    77, 48, 93, 26, 64, 3,  91, 16, 40, 76,
    1,  34, 70, 98, 22, 57, 86, 12, 44, 79,
    7,  52, 85, 19, 66, 30, 95, 74, 41, 99,
    25, 59, 87, 15, 43, 80, 97, 20, 35, 69,
    11, 46, 83, 28, 62, 88, 17, 53, 78, 2,
    65, 8,  36, 73, 21, 58, 84, 13, 49, 94,
    4,  39, 75, 100,27, 56, 90, 32, 67, 24,
    51, 6,  33, 71, 42, 60, 92, 38, 54, 26};

    binary_search(array, 99, 0, 54);

    return 0;
}
