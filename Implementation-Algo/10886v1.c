#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[105];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    int cute = 0;
    int not = 0;

    for(int i = 0; i < N; i++){
        if(arr[i] == 1){
            cute++;
        }
        else{
            not++;
        }
    }
    if(cute > not){
        printf("Junhee is cute!");
    }
    else{
        printf("Junhee is not cute!");
    }

}