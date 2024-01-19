#include <stdio.h>
int main(){
    FILE *fl_in,*fl_out;
    char in_file[] = "in2.txt";
    char out_file[] = "out.txt";
    char line[80];
    int x,y,sum;
    fl_in = fopen(in_file,"r");
    fl_out = fopen(out_file,"w");
    fgets(line,80,fl_in);
    sscanf(line,"%d %d",&x,&y);
    sum = x+y;
    fprintf(fl_out,"SUM: %d",sum);
    fclose(fl_in);
    fclose(fl_out);
    return 0;
}