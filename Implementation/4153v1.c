#include <stdio.h>
#define max(x,y) ((x) >= (y) ? (x) : (y))
//find if its triangle has a right angle (90 degrees)
int main(){
    int arr[3];
    while(1){
        scanf("%d%d%d\n", &arr[0], &arr[1], &arr[2]);
        if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0){
            break;
        }
        //find the hypotenuse using max
        int maxNum = max(max(arr[0],arr[1]),arr[2]);
        int otherTwo = 0;
        for(int i = 0; i < 3; i++){
            //find the other two sides and calculate
            if(arr[i] != maxNum){
                otherTwo = arr[i] * arr[i] + otherTwo;
            }
        }
        int temp = maxNum * maxNum;
        //if a^2 = b^2 + c^2, then "right", else "wrong"
        if(temp == otherTwo){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
    return 0;
}