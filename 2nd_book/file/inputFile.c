#include <stdio.h>
int main(){
    FILE *fl_in, *fl_out;
    char in_file[] = "in.txt";
    char out_file[] = "out.txt";
    int x,y,sum;

    fl_in = fopen(in_file,"r");
    fl_out = fopen(out_file,"w");

    fscanf(fl_in,"%d",&x);
    fscanf(fl_in,"%d",&y);
    sum = x+y;
    printf("%d + %d = %d\n",x,y,sum);
    fprintf(fl_out,"output: %d\n",sum);

    fclose(fl_in);
    fclose(fl_out);

    return 0;
}