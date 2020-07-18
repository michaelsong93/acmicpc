#include <stdio.h>

int main(){
    int A,B,sum = 0;
    while(1){
        scanf("%d%d", &A,&B);
        if(A == 0 && B == 0){
            break;
        }
        else{
            sum += A+B;
            printf("%d\n", sum);
            sum = 0;
        }
    }
}