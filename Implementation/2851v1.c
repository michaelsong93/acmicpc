#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

int arr[10];
for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
}

// arr[10] = {(score, i = -1, == current) [temp, i=0, == next val] [] [] [] ...
int score = 0;
for(int i = 0; i < 10; i++){
    int temp = score + arr[i];
    int current = abs(100 - score);
    int next = abs(100 - temp);
    //if current val is >= next, then score = temp
    if(next <= current){
        score = temp;
    }
}

printf("%d", score);
}