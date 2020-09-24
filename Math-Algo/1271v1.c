#include <stdio.h>

int main(){
    unsigned long long A,B;
    scanf("%lld%lld", &A,&B);
    unsigned long long div = A / B;
    printf("%lld\n", div);
    div = A % B;
    printf("%lld", div);
}