#include <stdio.h>
#include <string.h>

    char stringChar[505] = {0};
    char stringCopy[505] = {0};

int main(){

    while(1){
        scanf("%[^\n]s", stringChar);
        getchar();
        if(stringChar[0] == 'E' && stringChar[1] == 'N' && stringChar[2] == 'D') break;
        int index = 0;
        for(int i = strlen(stringChar) - 1; i >= 0; i--){
            stringCopy[index] = stringChar[i];
            index++;
        }

        index = 0;
        printf("%s\n", stringCopy);
        
        memset(stringChar, 0, 505);
        memset(stringCopy, 0, 505);
    }
}