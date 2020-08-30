#include <stdio.h>

int main(){
    int arr[8];
    for(int i = 0; i < 8; i++){
        scanf("%d", &arr[i]);
    }
    

    int asc = 0;
    int des = 0;

    for(int i = 0; i < 8; i++){
        if(arr[i] == i+1){
            asc++;
        }
        else if(arr[i] == 8-i){
            des++;
        }
    }

    if(asc == 8){
        printf("ascending");
    }
    else if(des == 8){
        printf("descending");
    }
    else{
        printf("mixed");
    }
}