#include <stdio.h>

int reverse(int num){
    int reversed = 0;
    while(num != 0){
        reversed = reversed * 10;
        reversed = reversed + num % 10;
        num = num / 10;
    }
    return reversed;
}

int main(){
    int N;
    while(scanf("%d", &N) != 0){
        if(N == 0) return 0;
        int temp = N;
        N = reverse(N);
        if(temp == N){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
}