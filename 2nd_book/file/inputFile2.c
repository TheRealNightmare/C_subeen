#include <stdio.h>
int main(){
    FILE *fl_in, *fl_out;
    int x,y,total;
    char in_file[] = "in.txt";
    char out_file[] = "out.txt";
    fl_in = fopen(in_file,"r");
    fl_out = fopen(out_file,"w");
    fscanf(fl_in,"%d",&x);
    fscanf(fl_in,"%d",&y);
    total = x+y;
    fprintf(fl_out,"Sum: %d\n",total);
    total = x-y;
    fprintf(fl_out,"Difference: %d\n",total);
    total = x*y;
    fprintf(fl_out,"Multiplication: %d\n",total);
    total = x/y;
    fprintf(fl_out,"Division: %d\n",total);
    fclose(fl_in);
    fclose(fl_out);
    return 0;
}