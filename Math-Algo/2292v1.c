#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++){
        arr[i] = i + 1;
    }

    int tier = 1;
    int count = 1;

    for(int i = 0; i < N; i++){
        if(arr[i] == 6 * count){

            count++;
        }
    }

alignas

}