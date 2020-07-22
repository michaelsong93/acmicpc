#include<stdio.h>

int main(){
    int friendNums, length, count = 0;
    scanf("%d%d", &friendNums, &length);

    int arr[length][2];
    
    int friendList[505] = {0};
    int idx = 0;

    for(int i = 0; i < length; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &arr[i][j]);
        }

        if(arr[i][0] == 1){
            friendList[idx] = arr[i][1];
            idx++;
            // count++;
            // printf("%d %d\n", count, i);
        }
        else{
            a

            for(int k = 0; k < length; k++){
                if(arr[i][0] == friendList[k]){
                    for(int h = 0; h < length; h++){
                        if(arr[i][1] != friendList[k]){
                        count++;
                        }
                        // else{
                        //     break;
                        // }
                    }
                }
            }   
        }
    }

    // for(int i = 0; i < length; i++){
    //     printf("%d", friendList[i]);
    // }
    printf("%d", count);
}