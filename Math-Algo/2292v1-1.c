#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int count = 0;

    if(N == 1) count = 1;
    
    for(int i = 2; i <= N; count++){
        i += 6 * count;
        
    }

    printf("%d", count);

}