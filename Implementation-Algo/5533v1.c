#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[3][N];
    int score[3][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[j][i]);
            score[j][i] = arr[j][i];
        }
    }

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < N; j++){
            for(int k = j+1; k < N; k++){
                if(arr[i][j] == arr[i][k]){
                    score[i][j] = 0;
                    score[i][k] = 0;
                }
            }
        }

    }  
    
    int sum = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            sum += score[j][i];
        }
        printf("%d\n", sum);
        sum = 0;
    }
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }



}