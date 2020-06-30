#include <stdio.h>

int main(){
    int N;
    int nums = 0;
    int count = 1;
    int length = 10;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        if(i == length){
            count++;
            length = length *10;
        }
        nums = nums + count;
    }
    printf("%d", nums);

}