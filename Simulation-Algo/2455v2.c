#include <stdio.h>

int main(){
    int arr[4][2];
    for(int i = 0; i < 4; i++){
        scanf("%d%d", &arr[i][0], &arr[i][1]);
    }

    int value = 0;
    int arr2[4];
    for(int i = 0; i < 4; i++){
        value += arr[i][1] - arr[i][0];
        arr2[i] = value;

        if(arr2[i] > 10000){
            arr2[i] = 10000;
            value = 10000;
        }
    }

    int max = 0;
    for(int i = 0; i < 4; i++){
        int current = arr2[i];
        if(max < current){
            current = max;
        }
    }
    printf("%d", max);
}