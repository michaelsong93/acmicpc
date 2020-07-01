#include <stdio.h>
#define min(x,y) ((x) < (y) ? (x) : (y))

int main(){
    int input[5];
    int burger;
    int drink;

    for(int i = 0; i < 5; i++){
        scanf("%d", &input[i]);
    }

    int b_min = min(min(input[0], input[1]), input[2]);
    int d_min = min(input[3], input[4]);
    int result = b_min + d_min - 50;

    printf("%d", result);

}