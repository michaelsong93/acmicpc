#include <stdio.h>

int N, count = 0;


int backToOne(int a){
    if(a == 1){
        return count;
    }

    if(a % 3 == 0){
        a = a / 3;
        count++;
        backToOne(a);
    }
    else if(a % 2 == 0){
        a = a / 2;
        count++;
        backToOne(a);
    }
    
    else{
        a = a - 1;
        count++;
        backToOne(a);
    }
    return count;
}

int main(){
    scanf("%d", &N);
    printf("%d",backToOne(N));    
}