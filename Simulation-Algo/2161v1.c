#include <stdio.h>

int main(){
    int Card;
    scanf("%d", &Card);
    int arr[Card];
    int ans[Card];
    
    for(int i = 0; i < Card; i++){
        arr[i] = i+1;    
    }

    for(int i = 0; i < Card; i++){
        ans[i] = arr[i];
        int temp = arr[i+1];

        for(int j = i+1; j < Card; j++){
            arr[j] = arr[j+1];
        }
        arr[Card-1] = temp;   
    }
    for(int i = 0; i < Card; i++){
        printf("%d ", ans[i]);
    }
}