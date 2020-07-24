#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    
    for(int k = 1; k < N; k++){
        for(int h = 0; h < k; h++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            printf("*");
        }
        printf("\n");
    }
}