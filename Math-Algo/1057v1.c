#include <stdio.h>

int main(){
    int N, kim, lim;
    scanf("%d%d%d", &N, &kim, &lim);

    int count = 0;
    while(kim != lim){
        kim -= kim/2;
        lim -= lim/2;
        count++;
    }
    printf("%d", count);

}