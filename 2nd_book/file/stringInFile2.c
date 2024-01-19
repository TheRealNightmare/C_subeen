#include <stdio.h>
int main(){
    FILE *fl_in, *fl_out;
    char in_file[] = "in2.txt";
    char out_file[] = "out.txt";
    char str[80];
    int x,y,total;
    fl_in = fopen(in_file,"r");
    fl_out = fopen(out_file,"w");
    fgets(str,80,fl_in);
    sscanf(str,"%d %d",&x,&y);
    total = x+y;
    fprintf(fl_out,"sum: %d\n",total);
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