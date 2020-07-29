#include <stdio.h>

int main(){
    int N,T, sum = 0, count = 0;
    scanf("%d%d", &N, &T);
    
    int works[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &works[i]);
    }

    for(int i = 0; i < N; i++){
        sum += works[i];
        if(T >= sum){
            count++;
        }
    }
    printf("%d", count);
}