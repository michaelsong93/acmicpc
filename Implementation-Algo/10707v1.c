#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int A,B,C,D,P;
    scanf("%d%d%d%d%d", &A, &B, &C, &D, &P);

    int xCompany = A * P;

    int yCompany;
    if(P < C){
        yCompany = B;
    }
    else{
        int over = abs(C - P);
        yCompany = B + (over * D);
    }

    if(xCompany < yCompany){
        printf("%d", xCompany);
    }
    else{
        printf("%d", yCompany);
    }
}