#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fl_in, *fl_out;
    char in_file[] = "nightmare.jpg";
    char out_file[] = "copy.jpg";
    int ch;

    fl_in = fopen(in_file,"rb");
    if(fl_in== NULL){
        perror("Failed");
        return EXIT_FAILURE;
    }
    fl_out = fopen(out_file,"wb");
    while(1){
        ch = fgetc(fl_in);
        if(ch== EOF){
            break;
        }
        fputc(ch,fl_out);
    }

    fclose(fl_in);
    fclose(fl_out);
    return 0;
}