#include <stdio.h>

int main(){
    int nums[10];
    int final[10] = {0};
    for(int i = 0; i < 10; i++){
        scanf("%d", &nums[i]);
        nums[i] = nums[i] % 42;
    }

    int count = 0;
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(nums[i] == nums[j]){
                final[i] = 1;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        if(final[i] == 0){
            count++;
        }
    }
    printf("%d", count);
}