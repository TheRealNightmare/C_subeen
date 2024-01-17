#include <stdio.h>
int main(){
    FILE *fp;
    char filename[] = "Nightmare.txt";
    fp = fopen(filename,"w");
    fprintf(fp,"This is Nightmare.\n");
    fprintf(fp,"Fuck Youuu!!!");
    fclose(fp);
    fprintf(fp,"luv u");
    return 0;
}