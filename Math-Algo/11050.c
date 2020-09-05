#include <stdio.h>

int factorial(int n){
    int num = 1;    
    for(int i = 1; i <= n; i++){
        num *= i;
    }
    return num;
}

int main(){
    int a,b,c,answer;
    scanf("%d%d", &a,&b);
    c = a - b;
    a = factorial(a);
    b = factorial(b);
    c = factorial(c);
    b = b * c;
    answer = a / b;
    printf("%d", answer);
}