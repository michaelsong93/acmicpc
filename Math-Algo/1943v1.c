#include <stdio.h>

int main(){
    int testCase, leastCommonDenominator, greatestCommonDivisor, max, min;
    scanf("%d", &testCase);



    for (int i = 0; i < testCase; i++){
        int arr[2];
        scanf("%d%d", &arr[0], &arr[1]);
        max = (arr[0] > arr[1]) ? arr[0] : arr[1];
        min = (arr[0] > arr[1]) ? arr[1] : arr[0];

        for(int j = 1; j*j <= min; j++){
            if(arr[0] % j == 0 && arr[1] % j == 0){
                greatestCommonDivisor = j;
            }
        }

        while (1){
            if (arr[0] == 1 || arr[1] == 1){
                leastCommonDenominator = max;
                break;
            }

            if ((max % arr[0] == 0) && (max % arr[1] == 0)){
                leastCommonDenominator = max;
                break;
            }
            max += greatestCommonDivisor;
        }
        printf("%d\n", leastCommonDenominator);
    }
}