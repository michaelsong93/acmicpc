#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int N,digit, idx = 0;
    int arr[105];
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        scanf("%d", &digit);
        arr[idx] = digit * i;
        idx++;
    }

    if(N > 1){
        printf("%d ", arr[0]);
        for(int i = 0; i < N-1; i++){
            printf("%d ", abs(arr[i] - arr[i+1]));
        }    
    }
    else{
        printf("%d", arr[0]);
    }
}