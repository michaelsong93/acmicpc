#include <stdio.h>
#include <math.h>

int main(){
    int N,W,H;
    scanf("%d%d%d", &N,&W,&H);
    int matches[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &matches[i]);
    }

    int hypotenuse = sqrt(pow(W,2) + pow(H,2));
    for(int i = 0; i < N; i++){
        if(matches[i] > hypotenuse){
            printf("NE\n");
        }
        else{
            printf("DA\n");
        }
    }
}