#include <stdio.h>

int main(){
    int A,B,sum = 0;

    while(scanf("%d%d", &A, &B) != EOF){
            sum += A+B;
            printf("%d\n", sum);
            sum = 0;
    }
}