#include <stdio.h>

int main(){
    int testCase, nums;
    int total = 0;
    scanf("%d", &testCase);
    for(int i = 0; i < testCase; i++){
        scanf("%d", &nums);
        int arr[nums];
        
        for(int j = 0; j < nums; j++){
            scanf("%d", &arr[j]);
            total += arr[j];
        }
        printf("%d\n", total);
        total = 0;
    }

}