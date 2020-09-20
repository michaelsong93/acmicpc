#include <stdio.h>

int count_zero = 0;
int count_one = 0;

int fibonacci(int n){
    if(n == 0){
        count_zero++;
        return 0;
    }
    else if(n == 1){
        count_one++;
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n-2);
    }
}

int main(){
    int N, num;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &num);
        if(num == 0){
            printf("1 0\n");
        }
        else if(num == 1){
            printf("0 1\n");
        }
        else{
            fibonacci(num);
            printf("%d %d\n", count_zero, count_one);
            count_one = 0;
            count_zero = 0;
        }
    }
}