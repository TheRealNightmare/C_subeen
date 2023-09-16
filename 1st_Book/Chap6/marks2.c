#include <stdio.h>

int main(){
    int ft_marks[20] = {83,86,97,95,93,80,83,71,54,65,76,87,99,100,95,57,65,62,78,98};

    int st_marks[20] = {83,86,97,95,93,80,83,71,54,65,76,87,99,100,95,57,65,62,78,98};

    int final_marks[20] = {83,86,97,95,93,80,83,71,54,65,76,87,99,100,95,57,65,62,78,98};
    
    double total_marks[20];

    int i;

    for(i=0;i<20;i++){
        total_marks[i] = (ft_marks[i]/4.0)+(st_marks[i]/4.0)+(final_marks[i]/2.0);        
    }

    for(i=1;i<=20;i++){
        printf("Roll No: %d\tTotal Marks: %0.2lf\n",i,total_marks[i-1]);
    }

    return 0;
}