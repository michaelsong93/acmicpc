#include <stdio.h>

int main(){
    long long A,B,C, count = 1;
    scanf("%lld%lld%lld", &A,&B,&C);

    while(1){
        if(C < B){
            printf("-1");
            break;
        }
        else if(A+B*count < C*count){
            break;
        }
        count++;
    }
    
    if(B < C){
        printf("%lld", count);
    }
}