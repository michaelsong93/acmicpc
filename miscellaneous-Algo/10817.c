#include <stdio.h>

int main(){
    int arr[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i] <= arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d", arr[1]);

    
}