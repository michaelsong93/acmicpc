#include <stdio.h>

int main(){
    int N, HP, MP, Attack, Defense;
    int idx = 0;
    int arr[1000];
    int attribute[8];

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 8; j++){
            scanf("%d", &attribute[j]);
        }

        HP = attribute[0] + attribute[4];
        MP = attribute[1] + attribute[5];
        Attack = attribute[2] + attribute[6];
        Defense = attribute[3] + attribute[7];

        if(HP < 1){
            HP = 1;
        }
        else if (MP < 1){
            MP = 1;
        }
        else if(Attack < 0){
            Attack = 0;
        }

        int total = (1*HP) + (5 * MP) + (2 * Attack) + (2 * Defense);
        arr[idx] = total;
        idx++;
    }

    for(int i = 0; i < N; i++){
        printf("%d\n", arr[i]);
    }
}