#include <stdio.h>
int main(){
    FILE *fp;
    char filename[] = "file.txt";
    fp = fopen(filename,"w");
    fprintf(fp,"This is Nightmare. ");
    fprintf(fp,"Nice to meet you.");
    fclose(fp);
    return 0;
}