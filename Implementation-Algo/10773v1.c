#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, num;
    int top = 0;
    scanf("%d", &N);
    int *list = (int*)malloc(sizeof(int)*(N+1));

    for(int i = 0; i < N; i++){
        scanf("%d", &num);
        if(num == 0){
            list[top] = 0;
            top--;
        }
        else{
            list[top] = num;
            top++;
        }
    }

    int sum = 0;
    for(int i = 0; i < top; i++){
        sum += list[i];
        //printf("%d\t", list[i]);
    }
    printf("%d", sum);

}