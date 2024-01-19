#include <stdio.h>
int main(){
    FILE *fl;
    char filename[] = "nightmare.txt";
    fl = fopen(filename,"w");
    fprintf(fl,"Hello everyone, ");
    fprintf(fl,"This is an automated file.\n");
    fclose(fl);
    fl = fopen(filename,"w");
    fprintf(fl,"rewritting the file\n");
    fclose(fl);
    return 0;
}