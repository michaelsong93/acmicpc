#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    int check = N;
    int count = 0;
    for(int i = N - 1; i >= 0; i--){
        if(check == arr[i]){
            check--;
        }
        else{
            count++;
        }
    }
    
    printf("%d", count);
}