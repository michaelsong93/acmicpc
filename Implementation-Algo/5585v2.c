#include <stdio.h>

int main(){

int input, count = 0, i = 0, coin[6] = {500, 100, 50, 10 , 5, 1};
scanf("%d", &input);
input = 1000 - input;

while(input > 0){
    if(input >= coin[i]){
        input -= coin[i];
        count++;
    }
    else{
        i++;
    }
}
printf("%d", count);
}