#include <stdio.h>

int main(){
    int N,A,B,sum = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d%d",&A,&B);
        sum += A+B;
        printf("%d\n", sum);
        sum = 0;
    }
}