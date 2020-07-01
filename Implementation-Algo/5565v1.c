#include <stdio.h>

int main(){
    int total, sum=0;
    scanf("%d",&total);
    int arr[9];
    for(int i = 0; i < 9; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    int without = total - sum;
    printf("%d",without);


}