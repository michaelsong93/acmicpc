#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N][3];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < N; j++){
            if(arr[i][j] == arr[i][j+1]){
                arr[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }



}