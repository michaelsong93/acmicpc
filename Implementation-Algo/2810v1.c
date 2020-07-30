#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    char arr[N];
    scanf("%s", arr);

    int count = 1;
    int countL = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] == 'S'){
            count++;
        }
        else if(arr[i] == 'L'){
            if(countL % 2 == 1){
                countL++;
                continue;
            }
            else{
                countL++;
                count++;
            }
        }
    }

    if(count > N){
        count = N;
    }


    printf("%d", count);
}