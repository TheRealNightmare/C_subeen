#include <stdio.h>
#include <string.h>

void encrypt(char msg[]){
    int i,n;
    n = strlen(msg);
    for(i=0;i<n;i++){
         msg[i] = (msg[i]+1);
    }
}
void decrypt(char msg[]){
    int i,n;
    n = strlen(msg);
    for(i=0;i<n;i++){
        msg[i] = (msg[i]-1);
    }
}

int main(){
    char c;
    char s[120];
    while(1)
    {
        scanf("%s",&c);
        if(c=='s'){
            break;
        }
        else if(c=='e'){
            scanf("%s",s);
            encrypt(s);
            printf("Encrypted: %s\n",s);
        }
        else if(c=='d'){
            scanf("%s",s);
            decrypt(s);
            printf("Decrypted: %s\n",s);
        }
    }
    return 0;
}