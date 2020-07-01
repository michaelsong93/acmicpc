#include <stdio.h>

int main(){
    int probs[8];
    int temp[8];
    for(int i = 0; i < 8; i++){
        scanf("%d", &probs[i]);
        temp[i] = probs[i];
    }

    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 8; j++){
            if(probs[i] < probs[j]){
            int temp = probs[i];
            probs[i] = probs[j];
            probs[j] = temp;
            }
        }
    }

    int total = 0;
    for(int i = 0; i < 5; i++){
        total += probs[i];
    }
    printf("%d\n", total);
    
    int nums[5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 8; j++){
            if(probs[i] == temp[j]){
                nums[i] = ++j;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = i; j < 5; j++){
            if(nums[i] > nums[j]){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", nums[i]);
    }  
}