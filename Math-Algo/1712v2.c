#include <stdio.h>

int main(){
    long long A,B,C, count = 1;
    scanf("%lld%lld%lld", &A,&B,&C);

    if(C <= B){
        printf("-1");
    }

    count = A/(C-B) + 1;
    if(C > B){
        printf("%lld", count);
    }

}