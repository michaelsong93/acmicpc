#include <stdio.h>

int main(){
    int M,N, min = 10005, total = 0;
    scanf("%d%d", &M,&N);

    int flag = 1;
    for(int i = M; i <= N; i++){
        if(i == 1){
            continue;
        }
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            
            if(total == 0){
                min = i;
            }
            total += i;
        }
        flag = 1;
    }
    if(total == 0){
        printf("-1\n");
    }
    else{
        printf("%d\n%d", total, min);
    }
}