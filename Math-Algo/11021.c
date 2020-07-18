#include <stdio.h>

int main(){
    int N, A, B, sum = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d%d", &A,&B);
        sum += A+B;
        printf("Case #%d: %d\n", i+1, sum);
        sum = 0;
    }
}