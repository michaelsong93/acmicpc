#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int min = 10000;
    for(int i = 0; i <= N/5; i++){
        int left_n = N - 5*i;
        if(left_n % 3 == 0){
            int x = i;
            int y = left_n/3;
            if(min > x + y){
                min = x + y;
            }
        }
    }
    if(min == 10000){
        min = -1;
    }
    printf("%d", min);
}