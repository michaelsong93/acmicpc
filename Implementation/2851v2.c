#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    int score = 0;
    //arr[10]={ (score = 0), [score + arr[i]], [] []...
    for(int i = 0; i < 10; i++){
        if(abs(score + arr[i] - 100) <= abs(score - 100)){
            score = score + arr[i];
        }
    }
    printf("%d", score);
}