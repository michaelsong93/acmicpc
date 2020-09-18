#include <stdio.h>

int main(){
    int A,B;
    scanf("%d%d", &A,&B);
    int max = (A > B) ? A : B;
    int min = (A > B) ? B : A;
    
    int min1;

    for(int i = 2; i <= min; i++){
        if(A % i == 0 && B % i == 0){
            min1 = i;
        }
    }
    printf("%d\n", min1);

    while(1){
        if(max % A == 0 && max % B == 0){
            printf("%d", max);
            break;
        }
        max++;
    }
}