#include <stdio.h>

int main(){
    int N;
    int arr[5];
    scanf("%d", &N);
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i < 5; i++){
        if(N == arr[i]){
            count++;
        }
    }
    printf("%d", count);
}