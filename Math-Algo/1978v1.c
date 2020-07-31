#include <stdio.h>
#include <math.h>

int main(){
    int N, num, count = 0;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &num);
        for(int j = 2; j <= sqrt(num); j++){
            if(num % j == 0){
                break;
            }
            else{
                count++;
            }
        }
    }

    printf("%d", count);
}