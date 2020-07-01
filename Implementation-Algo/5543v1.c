#include <stdio.h>

int main(){
    int burger;
    int drink;
    int input[5];
    int result = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &input[i]);
    }

    if(input[0] < input[1]){
        burger = input[0];
    }
    else{
        burger = input[1];
    }
    
    if(burger < input[2]){
        burger = burger;
    }
    else{
        burger = input[2];
    }

    if(input[3] < input [4]){
        drink = input[3];
    }
    else{
        drink = input[4];
    }

    result = burger + drink - 50;
    printf("%d", result);

}