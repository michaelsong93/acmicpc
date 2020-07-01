#include <stdio.h>
#define max(x,y) ((x) >= (y) ? (x) : (y))
int main(){
    int N;
    scanf("%d", &N);
    int arr[300005];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < N-1; i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    int count = 1;
    int maximum = 0;
    for(int i = N-2; i >= 0; i--){
        maximum = max(maximum,arr[i+1] + (N - i - 1));
        if(maximum <= arr[i] + N){
            count++;
        }
    }
    // int maximum = 0;
    // int count = 1;
    // for(int i = N - 2; i >= 0; i--){
    //     maximum = max(maximum,arr[i+1] + (N - i - 1));
    //         if(maximum <= arr[i]+N){
    //             count++;
    //         }
    // }
    printf("%d", count);
}