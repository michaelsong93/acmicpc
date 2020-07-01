#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    //version 2: finding the smallest amount of pair counts
    //set the big num as minimum
    int min = 10000;
    
    //since 5's biggest num is N/5, iterate with the max num that
    //5 can hold.. which is N/5
    for(int i = 0; i <= N/5; i++){
        //calculate left N num since i = num of 5
        int left_n = N - 5*i;
        //if the num % 3 == 0, then progress
        if(left_n % 3 == 0){
            int x = i; //5
            int y = left_n/3; //3
            //find the min pair number
            if(min > x + y){
                min = x + y;
            }
        }
    }
    //none, calculate -1
    if(min == 10000){
        min = -1;
    }
    printf("%d", min);
}