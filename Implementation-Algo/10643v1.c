#include <stdio.h>

int main(){
    int pizza[15];
    int max=0;

    for(int i = 0; i < 8; i++){
        scanf("%d", &pizza[i]);
    }

    // for(int i = 0; i < 8; i++){
    //     printf("%d", pizza[i]);
    // }

    for(int i = 0; i < 8; i++){
        int Gretel = 0;
        if(i == 5){
            pizza[8] = pizza[0];
        }
        else if(i == 6){
            pizza[9] = pizza[1];
        }
        else if(i == 7){
            pizza[10] = pizza[2];
        }

        for(int j = i; j < i+4; j++){
            Gretel += pizza[j];
        }
        if(Gretel > max){
            max = Gretel;
        }
    }

    printf("%d", max);
}