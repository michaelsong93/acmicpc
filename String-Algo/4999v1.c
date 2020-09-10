#include <stdio.h>
#include <string.h>
int main(){
    char stringJae[1005] = {0};
    char stringDoc[1005] = {0};
    scanf("%s", stringJae);
    scanf("%s", stringDoc);

    int countJae = 0;
    int countDoc = 0;
    for(int i = 0; i < strlen(stringJae); i++){
        if(stringJae[i] == 'a'){
            countJae++;
        }
    }

    for(int i = 0; i < strlen(stringJae); i++){
        if(stringDoc[i] == 'a'){
            countDoc++;
        }
    }

    if(countJae >= countDoc){
        printf("go");
    }
    else{
        printf("no");
    }
}