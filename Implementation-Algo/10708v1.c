#include <stdio.h>

int main(){
    int studentsNum, gamesNum;
    scanf("%d%d", &studentsNum, &gamesNum);
    
    int targetNum[gamesNum];
    
    for(int i = 0; i < gamesNum; i++){
        scanf("%d", &targetNum[i]);
    }
    // int index = 0;
    // char temp;
    // while(scanf("%d%c", &targetNum[index],&temp)){
    //     index++;
    //     if(temp == '\n'){
    //         break;
    //     }
    // }

    //     for(int i =0; i < gamesNum; i++){
    //     printf("%d\n", targetNum[i]);
    // }

    int studentBoard[gamesNum][studentsNum];
    for(int i = 0; i < gamesNum; i++){
        for(int j = 0; j < studentsNum; j++){
            scanf("%d", &studentBoard[i][j]);
        }
    }
    
//    for(int i = 0; i < gamesNum; i++){
//         for(int j = 0; j < studentsNum; j++){
//             printf("%d \t", studentBoard[i][j]);
//         }
//         printf("\n");
//     }
    
    int scoreBoard[studentsNum];
    for(int i = 0; i < studentsNum; i++){
        scoreBoard[i] = 0;
    }
    
    for(int i = 0; i < gamesNum; i++){
        for(int j = 0; j < studentsNum; j++){
            if(targetNum[i] == studentBoard[i][j]){
                scoreBoard[j]++;
            }
            else{
                scoreBoard[targetNum[i]-1]++;
            }
        }
    }

    for(int i =0; i < studentsNum; i++){
        printf("%d\n", scoreBoard[i]);
    }
    return 0;
}