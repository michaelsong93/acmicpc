#include <stdio.h>

int main(){
    int a,b, flag;
    scanf("%d%d", &a,&b);

    flag = 1;
    for(int i = a; i <=b; i++){
        if( i == 1){
            continue;
        }

        for(int j = 2; j*j <= i; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            printf("%d\n", i);
        }
        flag = 1;
    }
}

   // while(a <= b){
    //     flag = 0;
    //     for(int i = 2; i <= a/2; i++){
    //         if(a % i == 0){
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if(flag == 0){
    //         printf("%d\n", a);
    //     }
    //     a++;
    // }