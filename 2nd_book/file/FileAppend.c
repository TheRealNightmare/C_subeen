#include <stdio.h>
int main(){
    FILE *fl;
    char Filename[] = "nightmare.txt";
    fl = fopen(Filename,"w");
    fprintf(fl,"Nightmare\n");
    fprintf(fl,"This is your boss speaking. I want to say that ");
    fclose(fl);
    fl = fopen(Filename,"a");
    fprintf(fl,"Fuck Youu!!!!!");
    fclose(fl);
    return 0;
}