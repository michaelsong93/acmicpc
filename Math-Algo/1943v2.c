#include <stdio.h>

int euclidean(int a, int b){
    if(a == 0){
        return b;
    }
    return euclidean(b%a, a);
}

int main(){
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++){
        int arr[2];
        scanf("%d%d", &arr[0], &arr[1]);
        printf("%d\n",((arr[0]*arr[1])/euclidean(arr[0], arr[1])));
    }
}