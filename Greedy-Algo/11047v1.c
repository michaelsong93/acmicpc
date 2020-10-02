#include <stdio.h>

int main(){
    int N, total, count = 0;
    scanf("%d%d", &N,&total);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    while(total != 0){
        for(int i = N-1; i >= 0; i--){
            if(total >=  arr[i]){
                total = total - arr[i];
                count++;
                break;
            }
        }
    }
    printf("%d", count);

}