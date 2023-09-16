#include <stdio.h>

int string_compare(char a[], char b[]){
    int i,j;
    for(i=0,j=0; a[i]!='\0' && b[j]!='\0'; i++, j++){
        if(a[i]<b[i]){
            return -1;
        }
        else if(a[i]>b[i]){
            return 1;
        }
    }
}

int main(){
    char a[10];
    char b[10];

    scanf("%s %s", a,b);

    int ans = string_compare(a,b);
    printf("%d", ans);

    return 0;
}