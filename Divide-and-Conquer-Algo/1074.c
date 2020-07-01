#include <stdio.h>
#include <math.h>
int countNum = 0;

int count(int size, int x, int y){

    if(size == 1){
        if(x == 0 && y == 0){
            countNum = 0;
        }
        else if(x == 1 && y == 0){
            countNum = 1;
        }
        else if(x == 0 && y == 1){
            countNum = 2;
        }
        else if(x == 1 && y == 1){
            countNum = 3;
        }
    }
    else{
        int half_size = pow(2,size-1);
        if(x >= half_size && y >= half_size){
            countNum = 3 * half_size * half_size + count(size-1,x-half_size,y-half_size);
        }
        else if(x < half_size && y >= half_size){
            countNum = 2 * half_size * half_size + count(size-1,x,y-half_size);
        }
        else if(x >= half_size && y < half_size){
            countNum = half_size * half_size + count(size-1, x - half_size, y);
        }
        else{
            countNum = count(size-1,x,y);
        }
    }

    return countNum;
}   

int main(){

int N,r,c;
scanf("%d%d%d", &N,&r,&c);
count(N,c,r);
printf("%d", countNum);

}