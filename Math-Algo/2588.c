#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d", &x,&y);
    
    int temp = y;
    int B[5];
    int idx = 0;

    while(temp > 0){
        int digit = temp % 10;
        B[idx] = digit;
        idx++;
        temp = temp / 10;
    }

    for(int i = 0; i < 3; i++){
        printf("%d\n", x * B[i]);
    }
    printf("%d", x*y);
}