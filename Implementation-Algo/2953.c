#include <stdio.h>

int main(){

    int a,b,c,d;
    int sum = 0;
    int row;
    for(int i = 0; i < 5; i++){
        scanf("%d%d%d%d", &a,&b,&c,&d);
        int temp = a+b+c+d;
        if(temp > sum){
            sum = temp;
            row = i + 1;
        }

    }
    printf("%d %d",row,sum);
}