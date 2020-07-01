#include <stdio.h>
#include <stdlib.h>

int main(){
    int input;
    scanf("%d", &input);

    int r,e,c;
    for(int i = 0; i < input; i++){
        scanf("%d%d%d", &r,&e,&c);
        if(r+c > e){
            printf("do not advertise\n");
        }
        else if(r+c < e){
            printf("advertise\n");
        }
        else if(r+c == e){
            printf("does not matter\n");
        }
    }
}