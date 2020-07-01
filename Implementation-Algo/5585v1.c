#include <stdio.h>

int main(){

int input;
scanf("%d", &input);
int change = 1000 - input;
int count = 0;

while(change > 0){
    if(change >= 500){
        change = change - 500;
        count++;
    }
    else if(change >= 100){
        change = change - 100;
        count++;
    }
    else if(change >= 50){
        change = change - 50;
        count++;
    }
    else if(change >= 10){
        change = change - 10;
        count++;
    }
    else if(change >= 5){
        change = change - 5;
        count++;
    }
    else if(change >= 1){
        change = change - 1;
        count++;
    }
}

printf("%d", count);
}