#include <stdio.h>
#include <math.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    int totalNum[N];
    for(int i = 0; i < N; i++){
        int first_digit = arr[i] % 10;
        int rest_digits = arr[i] / 10;
        long total = pow(rest_digits,first_digit); 
        totalNum[i] = total;
    }

    long sum = 0;
    for(int i = 0; i < N; i++){
        sum += totalNum[i]; 
    }
    printf("%ld", sum);
}