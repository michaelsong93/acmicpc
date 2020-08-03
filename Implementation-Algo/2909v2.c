#include <stdio.h>
#include <math.h>
int main(){
    int cost, paper;
    scanf("%d%d", &cost, &paper);

    int power = pow(10,paper);
    
    int digit = cost % power;
    int final = 0;


    if(digit >= (power/2)){
        final = ceil((double)cost/(double)power);
    }
    else{
        final = floor((double)cost/(double)power);
    }

    printf("%d", final*power);
    
}