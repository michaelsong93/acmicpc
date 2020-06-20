#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

int arr[10];
for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
}

int score = 0;
for(int i = 0; i < 10; i++){
    int temp = score + arr[i];
    int current = abs(100 - score);
    int next = abs(100 - temp);

    if(next <= current){
        score = temp;
    }
}

printf("%d", score);
}