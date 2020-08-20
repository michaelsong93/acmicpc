#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int A[105];
    int B[105];

    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < N; i++){
        scanf("%d", &B[i]);
    }

    
    for(int i = 0; i < N-1; i++){
        for(int j = i; j < N; j++){
            if(A[i] > A[j]){
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
        }
    }

    for(int i = 0; i < N-1; i++){
        for(int j = i; j < N; j++){
            if(B[i] < B[j]){
            int temp = B[i];
            B[i] = B[j];
            B[j] = temp;
        }
        }
    }

    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += A[i]*B[i];
    }

    printf("%d", sum);
}