#include <stdio.h>
#include <string.h>

int main(){
    char stringChar[105];
    char stringCopy[105];
    scanf("%s", stringChar);

    int index = 0;
    for(int i = strlen(stringChar)-1; i >= 0; i--){
        stringCopy[index] = stringChar[i];
        index++;
    }
    
    int flag = 0;
    for(int i = 0; i < strlen(stringChar); i++){
        if(stringChar[i] == stringCopy[i]){
            continue;
        }
        else{
            flag = 1;
            break;
        }
    }
    
    if(flag == 0){
        printf("1");
    }
    else{
        printf("0");
    }
}