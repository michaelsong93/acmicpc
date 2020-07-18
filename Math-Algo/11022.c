#include <stdio.h>

int main(){
    int N,A,B, sum = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d%d", &A,&B);
        sum += A+B;
        printf("Case #%d: %d + %d = %d\n", i, A, B, sum);
        sum = 0;
    }

}