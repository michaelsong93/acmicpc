#include <stdio.h>

int reverseNum(int a){
    int remaining = 0;
    while(a != 0){ 
        remaining = remaining * 10;
        remaining = remaining + a % 10;
        a = a/10;
    }
    return remaining;
}

int main(){
    int A,B;
    scanf("%d%d",&A,&B);
    A = reverseNum(A);
    B = reverseNum(B);
    if(A > B){
        printf("%d",A);
    }
    else{
        printf("%d",B);
    }
}