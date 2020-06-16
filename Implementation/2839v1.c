#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int count = 0;
    while(N >= 3 && N <= 5000){
        if(N % 5 == 0){
            N = N - 5;
            count++;
        }
        else if(N % 3 == 0){
            N = N - 3;
            count++;
        }
        else if(N>5){
            N = N - 5;
            count++;
        }
        else{
            count = -1;
            break;
        }
    }
    printf("%d", count);
}