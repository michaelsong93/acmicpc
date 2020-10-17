#include <stdio.h>
int arr[201] = {0};

int main(){
    int end, index = 0, count = 0, check = 0;
    //size_t n = sizeof(arr)/sizeof(arr[0]);
    //printf("%d", n);
    while(1){
        scanf("%d", &arr[index]);
        
        if(arr[index] == -1){
            break;
        }
        
        if(arr[index] == 0){
            check = 1;
            for(int i = 0; i < index; i++){
                for(int j = 0; j < index; j++){
                    if(arr[i] == arr[j]*2){
                        count++;
                    }
                }
            }
            
            for(int i = 0; i < index-1; i++){
                arr[i] = 0;
            }
            printf("%d\n", count);
            index = 0;
            count = 0;
        }
        if(check == 0){
            index++;
        }
        else{
            check = 0;
            index = 0;
        }

    }
}