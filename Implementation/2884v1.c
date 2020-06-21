#include <stdio.h>

int main(){

int H,M;

scanf("%d%d", &H, &M);

    if(M < 45){
        if(H == 0){
        H = 24;
    }
        
        H--;
        M = 60 - (45 - M);
    }
    else{
        M = M - 45;
    }
    printf("%d %d", H,M);

}