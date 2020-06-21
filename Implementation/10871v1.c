#include <stdio.h>

int main(){
    int N,X;
    scanf("%d%d",&N,&X);

    while(1<= X && X <= 10000){
        int arr[10005];
        for(int i = 0; i < N; i++){
            scanf("%d", &arr[i]);
        }
        for(int i = 0; i < N; i++){
            if(arr[i] < X){
                printf("%d ", arr[i]);
            }
        }
    }
}