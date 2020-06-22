#include <stdio.h>
#define max(x,y) ((x) >= (y) ? (x) : (y))

int main(){
    int arr[3];
    while(1){
        scanf("%d%d%d\n", &arr[0], &arr[1], &arr[2]);
        if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0){
            break;
        }

        int maxNum = max(max(arr[0],arr[1]),arr[2]);
        int otherTwo = 0;
        for(int i = 0; i < 3; i++){
            if(arr[i] != maxNum){
                otherTwo = arr[i] * arr[i] + otherTwo;
            }
        }
        int temp = maxNum * maxNum;
        if(temp == otherTwo){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
    return 0;
}