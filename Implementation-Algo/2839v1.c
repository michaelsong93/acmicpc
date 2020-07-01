#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int count = 0;

    //finding the smallest amount of counts
    //first we start with 5 since it's bigger than 3, count++
    while(N >= 3 && N <= 5000){
        if(N % 5 == 0){
            N = N - 5;
            count++;
        }
        //then with 3, count++
        else if(N % 3 == 0){
            N = N - 3;
            count++;
        }
        //if N % 5 == 0 is not possible, we first calculate with 5
        //after this iteration, see if the num can be %5 or %3
        else if(N>5){
            N = N - 5;
            count++;
        }
        //for nums like 4
        else{
            count = -1;
            break;
        }
    }
    printf("%d", count);
}