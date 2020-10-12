#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int testCases, testCount, testAdd, testAvg, testRange;
    scanf("%d", &testCases);
    
    if(testCases == 1){
        int temp;
        scanf("%d", &temp);
        printf("%d\n%d\n%d\n%d", temp, temp, temp, 0);
        return 0;
    }


    int testArr[testCases];
    int countArr[8001] = {0};
    int min = 4001, max= -4001;
    for(int i = 0; i < testCases; i++){
        scanf("%d", &testArr[i]);
        //sum
        testAdd += testArr[i];
        
        //count
        countArr[testArr[i] + 4000]++;
    
        //range
        if(testArr[i] < min){
            min = testArr[i];
        }
        if(testArr[i] > max){
            max = testArr[i];
        }
    }

    double sum = (double)testAdd / testCases;
    testAdd = round(sum);
    testRange = abs(max - min);
    
    //mid
    qsort(testArr,testCases, sizeof(int), cmpfunc);
    testAvg = testArr[(testCases + 1) / 2 -1];

    int countMax = 0, flag; 
    for(int i = 0; i < 8001; i++){    
        if(countArr[i] > countMax){
            countMax = countArr[i];
            flag = i;
        } 
    }

    for(int i = flag+1; i < 8001; i++){
        if(countArr[i] == countMax){
            flag = i;
            break;
        }
    }
    countMax = flag - 4000;

    printf("%d\n", testAdd);
    printf("%d\n", testAvg);
    printf("%d\n", countMax);
    printf("%d\n", testRange);
}