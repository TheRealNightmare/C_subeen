#include <stdio.h>
int main(){
    FILE *fl_math,*fl_eng,*fl_bng,*fl_out;
    char math_file[] = "math.txt";
    char eng_file[] = "eng.txt";
    char bng_file[] = "bng.txt";
    char out_file[] = "out.txt";
    char M[80];
    char E[80];
    char B[80];
    int x,y,z,a,total;

    fl_math = fopen(math_file,"r");
    fl_eng = fopen(eng_file,"r");
    fl_bng = fopen(bng_file,"r");
    fl_out = fopen(out_file,"w");

    for(int i = 1; i<=10; i++){
        fgets(M,80,fl_math);
        fgets(E,80,fl_eng);
        fgets(B,80,fl_bng);

        sscanf(M,"%d %d",&a,&x);
        sscanf(E,"%d %d",&a,&y);
        sscanf(B,"%d %d",&a,&z);

        total = (x+y+z)/3;

        fprintf(fl_out,"Roll:%d --> Avg:%d\n",i,total);
    }

    fclose(fl_math);
    fclose(fl_eng);
    fclose(fl_bng);
    fclose(fl_out);
    return 0;
}