#include <stdio.h>

int main(){
    int A,B, total = 0;
    scanf("%d%d", &A,&B);
    total = A * B;
    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        printf("%d ", arr[i] - total);
    }
}