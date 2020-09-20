#include <stdio.h>

int main(){
    int dwarfs[9] = {0};
    int total = 0;
    for(int i = 0; i < 9; i++){
        scanf("%d", &dwarfs[i]);
        total += dwarfs[i];
    }

    for(int i = 0; i < 8; i++){
        for(int j = i + 1; j < 9; j++){
            if(total - dwarfs[i] - dwarfs[j] == 100){
                dwarfs[i] = 0;
                dwarfs[j] = 0;
                total = 100;
                break;
            }
        }
        if(total == 100){
            break;
        }
    }


    for(int i = 0; i < 8; i++){
        for(int j = i + 1; j < 9; j++){
            if(dwarfs[i] >= dwarfs[j]){
                int temp = dwarfs[i];
                dwarfs[i] = dwarfs[j];
                dwarfs[j] = temp;
            }
        }
    }

    for(int i = 2; i < 9; i++){
        printf("%d\n", dwarfs[i]);
    }
}