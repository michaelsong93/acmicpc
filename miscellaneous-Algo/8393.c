#include <stdio.h>

int main(){
    int sum = 0, N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        sum += i+1;
    }
    printf("%d", sum);
}