#include <stdio.h>

int main(){
    int arr[3][4];
    for(int i = 0; i < 3; i++){
        scanf("%d%d%d%d", &arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3]);
    }

    int yes = 0;
    int arr1[3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == 1){
                yes++;
            }
        }
        arr1[i] = yes;
        yes = 0;
    }
    for(int i = 0; i < 3; i++){
        if(arr1[i] == 4){
            printf("E\n");
        }
        else if(arr1[i] == 3){
            printf("A\n");
        }
        else if(arr1[i] == 2){
            printf("B\n");
        }
        else if(arr1[i] == 1){
            printf("C\n");
        }
        else if(arr1[i] == 0){
            printf("D\n");
        }
    }
}