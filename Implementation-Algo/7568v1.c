#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N][2];
    int rank[N];
    for(int i = 0; i < N; i++){
        scanf("%d%d", &arr[i][0],&arr[i][1]);
    }
    for(int i = 0; i < N; i++){
        rank[i] = 0;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(arr[i][0] < arr[j][0]){
                if(arr[i][1] < arr[j][1]){
                    rank[i] = 1;

                }
                else{
                    rank[i] = 2;
                }
            }
        }
    }
    for(int i = 0; i < N; i++){
        printf("%d", rank[i]);
    }
}