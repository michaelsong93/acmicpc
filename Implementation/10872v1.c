#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    
    int fact = 1;
    while(N != 0){
        fact = fact * N;
        N--;
    }
    printf("%d", fact);
    
}