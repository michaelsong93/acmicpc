#include <stdio.h>

int main(){
    int snail = 1, day = 0, A,B,V;
    scanf("%d%d%d", &A,&B,&V);

    while(snail != V){
        snail += (A-B);
        day++;
    }

    printf("%d", day);
}