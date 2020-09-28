#include <stdio.h>

int main(){
    int A,B;
    scanf("%d%d", &A,&B);
    int max = (A > B) ? A : B;
    int min = (A > B) ? B : A;
    
    int greatestCommonDivisor, leastCommonMultiple;
    
    for(int i = 1; i <= min; i++){
        if(A % i == 0 && B % i == 0){
            greatestCommonDivisor = i;
        }
    }
    printf("%d\n", greatestCommonDivisor);

    while(1){
        if(max % A == 0 && max % B == 0){
            leastCommonMultiple = max;
            break;
        }
        ++max;
    }
    printf("%d", leastCommonMultiple);
}