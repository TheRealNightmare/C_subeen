#include <stdio.h>

int main(){
    int i,j;
    int total_marks[] = {6,6,6,2,2,1,9,9,5,5};
    int marks_count[11];
    for(i=0; i<11; i++){
        marks_count[i] = 0;
    }
    for(i = 0; i<12; i++){
        marks_count[total_marks[i]]++;
        for(j=0;j<=10;j++){
        printf("%d ", marks_count[j]);
        }
         printf("\n");
    }
    return 0;
}