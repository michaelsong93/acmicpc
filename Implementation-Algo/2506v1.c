#include <stdio.h>

int main(){
    int check = 0, sum = 0, testCase;
    
    scanf("%d", &testCase);
    int arr[testCase];
    for(int i = 0; i < testCase; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 1){
            check++;
        }
        else{
            check = 0;
        }
        arr[i] = check;
    }

    for(int i = 0; i < testCase; i++){
        sum += arr[i];
    }
    printf("%d", sum);
}