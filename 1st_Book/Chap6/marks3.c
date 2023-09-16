#include <stdio.h>

int main(){
    int marks,i,count;
    int total_marks[] = {54,56,76,87,98,87,93,85,89,75,67,56,76,59,94,54,66,76,99,74};

    for(marks = 50; marks<=100; marks++){
        count = 0;
        for(i=0; i<20; i++){
            if(total_marks[i] == marks){
                count ++;
            }
        }
        printf("Marks: %d   Count: %d\n", marks,count);
    }
    return 0;
}