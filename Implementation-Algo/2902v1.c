#include <stdio.h>
#include <string.h>

int main(){
    char stringChar[105];
    scanf("%s", stringChar);

    for(int i = 0; i < strlen(stringChar); i++){
        if(stringChar[i] >= 'A' && stringChar[i] <= 'Z'){
            printf("%c", stringChar[i]);
        }
    }
}