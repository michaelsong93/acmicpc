#include <stdio.h>

int main(){
    int students[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
                        16,17,18,19,20,21,22,23,24,25,26,27,
                        28,29,30};

    int input[30] = {0,};
    for(int i = 0; i < 28; i++){
        scanf("%d",&input[i]);
    }

    for(int i = 0; i < 30; i++){
        for(int j = 0; j < 30; j++){
            if(input[i] == students[j]){
                students[j] = 0;
            }
        }
    }
    for(int i = 0; i < 30; i++){
        if(students[i] != 0){
            printf("%d\n", students[i]);
        }
    }
}