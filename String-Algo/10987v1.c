#include <stdio.h>
#include <string.h>

int main(){
    char stringChar[105];
    scanf("%s", stringChar);

    int count = 0;
    for(int i = 0; i < strlen(stringChar); i++){
        if(stringChar[i] == 'a' || stringChar[i] == 'e' || stringChar[i] == 'i' || stringChar[i] == 'o' || stringChar[i] == 'u'){
            count++;
        }
    }

    printf("%d", count);
}