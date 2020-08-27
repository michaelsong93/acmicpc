#include <stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
    int arr[10001] = {0};

int main(){
    int N;
    //cin >> N;
    scanf("%d", &N);
    int num;
    
    for(int i = 0; i < N; i++){
        scanf("%d", &num);
        arr[num]++;
    }

    for(int i = 0; i <= 10000; i++){
        if(arr[i] == 0){
            continue;
        }
        for(int j = 0; j < arr[i]; j++){
            printf("%d\n", i);
        
        }    
    }
}