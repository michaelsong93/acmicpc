#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    int sum = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sum = sum - N + 1;
    printf("%d", sum);
}