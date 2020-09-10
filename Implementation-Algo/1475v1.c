#include <stdio.h>

int nums[10] = {0};
int main(){
    int N;
    scanf("%d", &N);
    int mod;

    while(N != 0){
        mod = N % 10;
        nums[mod]++;
        N = N / 10;
    }
    int check = (nums[6] + nums[9] + 1)/2;


    for(int i = 0; i < 10; i++){
        if(i == 6 || i ==9){
            continue;
        }
        if(nums[i] > check){
            check = nums[i];
        }
    }
    if(check == 0){
        check = 1;
    }
    printf("%d", check);
}