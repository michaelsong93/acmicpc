#include <stdio.h>

int main(){
    char nums[11] = {0};
    scanf("%s", nums);

    size_t N = sizeof(nums) / sizeof(nums[0]);


    for(int i = 0; i < N-1; i++){
        for(int j = i+1; nums[j] != '\0'; j++){
            if(nums[i] < nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    printf("%s", nums);
}