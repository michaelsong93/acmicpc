#include <stdio.h>
#define MAX_NUM_PLAYERS 150
#define MAX_NUM_PCHAR 30

int main(){
    char playersInput[MAX_NUM_PLAYERS][MAX_NUM_PCHAR] = {0};
    int playersNum;
    int count[26] = {0};
    scanf("%d", &playersNum);

    for(int i = 0; i < playersNum; i++){
            //scanf("[^\n]", playersInput[i]);
            scanf("%s", playersInput[i]);
    }

    for(int i = 0; i < playersNum; i++){        
        char toSearch = playersInput[i][0];
        count[toSearch - 'a']++;
    }
    int checkAll = 0;
    for(int i = 0; i < 26; i++){
        if(count[i] >= 5){
            printf("%c", i + 'a');
            checkAll++;
        }
    }
    if(checkAll == 0){
        printf("PREDAJA");
    }
}