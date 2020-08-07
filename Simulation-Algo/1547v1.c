#include <stdio.h>

int main(){
    int arr[3] = {1,0,0};

    int testCase;
    scanf("%d", &testCase);

    for(int i = 0; i < testCase; i++){
        int A,B;
        scanf("%d%d",&A,&B);

        int temp = arr[A-1];
        arr[A-1] = arr[B-1];
        arr[B-1] = temp;
    }

    for(int i = 0; i < 3; i++){
        if(arr[i] == 1){
            printf("%d", i+1);
        }
    }

}