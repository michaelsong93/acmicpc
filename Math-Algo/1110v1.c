#include <stdio.h>

int main(){
    int N, count = 0;
    scanf("%d", &N);
    int sum = N;
    while(1){
        int x = sum % 10;
        int y = sum / 10;
        sum = x + y;
        count++;
        if(sum < 10){
            sum = sum + x*10;
        }
        else{
            int z = sum % 10;
            sum = x*10 + z;
        }
        
        if(sum == N){
            printf("%d", count);
            break;
        }
    }
}