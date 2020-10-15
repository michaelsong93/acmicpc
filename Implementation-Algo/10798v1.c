#include <stdio.h>

char stringChar[5][15];

int main(){

    for(int i = 0; i < '\n'; i++){
        scanf("%s", stringChar[i]);
    }

    for(int i = 0; i != 15; i++){
        for(int j = 0; j < 5; j++){
            if(stringChar[j][i] == '\0') continue;
            else printf("%c", stringChar[j][i]);
        }
    }
}