#include <stdio.h>
#include <string.h>

int idx[500005] = {0};

int main(){
    int N,M;
    scanf("%d%d", &N,&M);
    char list[N][20];
    char leaked[M][20];

    for(int i = 0; i < N; i++){
        scanf("%s", list[i]);
    }

    for(int i = 0; i < M; i++){
        scanf("%s", leaked[i]);
    }

    int count = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){

            // if(idx[j] == 1){
            //     continue;
            // }
a
            if(strcmp(list[i],leaked[j]) == 0){
                count++;
                idx[j] = 1;
                // strcpy(found[i],leaked[j]);
            }
        }
    }
    printf("%d\n", count);
    
    for(int i = 0; i < M; i++){
        if(idx[i] == 1){
            printf("%s\n", leaked[i]);
        }
    }
}