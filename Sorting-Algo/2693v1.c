#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int arr[10];    
        for(int j = 0; j < 10; j++){
            scanf("%d", &arr[j]);
        }

        for(int h = 0; h < 10; h++){
            for(int k = 0; k < 10; k++){
                if(arr[h] > arr[k]){
                    int temp = arr[k];
                    arr[k] = arr[h];
                    arr[h] = temp;
                }
            }
        }
        printf("%d\n", arr[2]);
    }
}