#include <stdio.h>
//int answer[100000000] = {0};

int main(){
    int N;
    scanf("%d", &N);

    int numbers[N];
    int min = 100000005;

    for(int i = 0; i < N; i++){
        scanf("%d", &numbers[i]);
        if(numbers[i] <= min){
            min = numbers[i];
        }
    }

    for(int i = 1; i <= min; i++){
        if(min % i == 0){
            int count = 0;
            for(int j = 0; j < N; j++){
                if(numbers[j] % i == 0){
                    count++;
                }
                if(count == N){
                    printf("%d\n", i);
                }
            }
        }
        // for(int j = 0; j < N; j++){
        //     // if(numbers[j] % i == 0){
        //     //     answer[i] = 1;
        //     // }
        //     // else{
        //     //     answer[i] = 0;
        //     // }
        // }
    }
    
    // for(int i = 1; i <= min; i++){
    //     if(answer[i] == 1){
    //         printf("%d\n", i);
    //     }
    // }
}