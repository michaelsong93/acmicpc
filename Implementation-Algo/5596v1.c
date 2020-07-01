#include <stdio.h>

int main(){

    int Mingook[4];
    int Mansae[4];

    int MG_Sum = 0;
    for(int i = 0; i < 4; i++){
        scanf("%d", &Mingook[i]);
        MG_Sum += Mingook[i];
    }

    int MS_Sum = 0;
    for(int i = 0; i < 4; i++){
        scanf("%d", &Mansae[i]);
        MS_Sum += Mansae[i];
    }

    if(MG_Sum > MS_Sum){  
        printf("%d", MG_Sum);
    }
    else if(MS_Sum > MG_Sum){
        printf("%d", MS_Sum);
    }
    else if(MG_Sum == MS_Sum){
        printf("%d", MG_Sum);
    }
}