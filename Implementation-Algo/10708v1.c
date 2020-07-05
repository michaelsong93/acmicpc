#include <stdio.h>

int main(){
    int studentsNum, gamesNum;
    scanf("%d%d", &studentsNum, &gamesNum);
    
    int targetNum[gamesNum];
    int index = 0;
    char temp;
    while(scanf("%d%c", &targetNum[index],&temp)){
        index++;
        if(temp == '\n'){
            break;
        }
    }

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
    for(int i = 0; i < gamesNum; i++){
        for(int j = 0; j < studentsNum; j++){
            if(targetNum[i] == studentBoard[i][j]){
                scoreBoard[j] += 1;
                if(targetNum[i] == j+1){
                    scoreBoard[j] += 1;
                }
            }
            
        }
    }
ㅁ

 
    for(int i =0; i < 3; i++){
        printf("%d\n", scoreBoard[i]);
    }


    return 0;
}