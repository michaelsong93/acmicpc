#include <stdio.h>

int arr[246920];

int main(){

    for(int i = 2; i <= 246912; i++){
        arr[i] = 1;
    }

    int divisor = 0;
    for(int i = 2; i <= 246912; i++){
        if(arr[i] == 1){
            divisor = i;
        for(int j = divisor + divisor; j <= 246912; j = j + divisor){
            arr[j] = 0;
        }

            // for(int j = i + 1; j <= 246912; j++){
            //     if(arr[j] == 0){
            //         continue;
            //     }
            //     if(j % divisor == 0){
            //         arr[j] = 0;
            //     }
            // }
        }
    }
    
    while(1){
        int n;
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        int count = 0;
        
        for(int i = n+1; i <= 2*n; i++){
            if(arr[i] == 1){
                count++;
            }
        }
        printf("%d\n", count);
    }
}