#include <stdio.h>

int main(){
    int games, diceOne, diceTwo, Chang = 100, Sang = 100;
    scanf("%d", &games);
    for(int i = 0; i < games; i++){
        scanf("%d%d", &diceOne, &diceTwo);
        if(diceOne > diceTwo){
            Sang = Sang - diceOne;
        }
        else if(diceOne == diceTwo){
            continue;
        }
        else if(diceOne < diceTwo){
            Chang = Chang - diceTwo;
        }
    }

    printf("%d\n%d", Chang, Sang);
}