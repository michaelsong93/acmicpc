#include <stdio.h>

int main(){
    int N, num, sum = 0, min = 101;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 7; j++){
            scanf("%d", &num);
            if(num % 2 == 0){
                sum += num;
                if(num < min){
                    min = num;
                }
            }
        }
        printf("%d %d\n", sum, min);
        min = 101;
        sum = 0;
    }
}