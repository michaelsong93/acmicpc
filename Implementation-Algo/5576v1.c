#include <stdio.h>

int main(){
    int W[10], K[10];
    // for(int i = 0; i < 20; i++){
    //     scanf("%d", &W[i]);
    //     if(i > 10){
    //          scanf("%d", &K[i]);
    //     }
    //     printf("%d\t%d\n", W[i], K[i]);
    // }
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &W[i]);
    }
    for(int i = 0; i < 10; i++){
        scanf("%d", &K[i]);
    }
        // for(int i = 0; i < 10; i++) printf("%d\t", W[i]);
        // printf("\n");


    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(W[i] > W[j]){
                int temp1 = W[i];
                W[i] = W[j];
                W[j] = temp1;
            }

            if(K[i] > K[j]){
                int temp2 = K[i];
                K[i] = K[j];
                K[j] = temp2;
            }
        }
    }
    int W_sum = 0;
    int K_sum = 0;
    for(int i = 0; i < 3; i++){
        W_sum += W[i];
        K_sum += K[i];
    }

    printf("%d %d", W_sum, K_sum);
    // for(int i = 0; i < 10; i++) printf("%d\t", W[i]);
    // printf("\n");
    //     for(int i = 0; i < 10; i++) printf("%d\t", K[i]);

}