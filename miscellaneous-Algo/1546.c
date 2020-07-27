#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    int max = 0;
    double avg = 0;

    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        if(arr[i] >= max){
            max = arr[i];
        }
        avg += arr[i];
    }

    avg = avg/N;
    avg = (avg/max)*100;

    printf("%f", avg);


}