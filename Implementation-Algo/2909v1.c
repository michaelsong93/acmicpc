#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int cost, paper;
    scanf("%d%d", &cost, &paper);

    int countCost = 0;
    while(cost != 0){
        countCost++;
        cost /= 10;
    }
    
    char str[countCost];    

    int idx = 0;
    while(cost > 0){
        int digit = cost % 10;
        sprintf(&str[idx],"%d",digit);
        idx++;
        cost /= 10;
    }

    int index = 0;
    for(int i = 0; i < paper; i++){
        str[index] = 0;
        index++;
    }

    for(int i = countCost-1; i > 0; i--){
        printf("%c", str[i]);
    }

    printf("%s", str);

a

}