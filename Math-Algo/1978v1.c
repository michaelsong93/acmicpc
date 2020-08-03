#include <stdio.h>
#include <math.h>

int main(){
    int N, num, count = 0;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &num);
        if(num == 1){
            continue;
        }

        int flag = 1;
        for(int j = 2; j <= sqrt(num); j++){
            //j*j <= num
            if(num % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            count++;
        }
        //flag = 1;
    }

    printf("%d", count);
}