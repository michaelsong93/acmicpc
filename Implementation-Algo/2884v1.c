#include <stdio.h>

int main(){

int H,M;
scanf("%d%d", &H, &M);
//alarm clock
//if minute < 45, 
    if(M < 45){
        //if hour == 00:00, change hour to 24:00
        if(H == 0){
            H = 24;
        }
        //hour -- if min <45
        H--;
        //calculate minute
        M = 60 - (45 - M);
    }
    else{
        //else, calculate only minutes
        M = M - 45;
    }
    printf("%d %d", H,M);
}