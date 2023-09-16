#include <stdio.h>

int main(){
    int i,j;

    char str1[6] = "bangla";
    char str2[4] = "desh";
    char str3[12];

    for(i=0,j=0; i<6; i++,j++){
        str3[j] = str1[i];
    }
    for(i=0; i<4; i++,j++){
        str3[j] = str2[i];
    }

    printf("%s", str3);

}