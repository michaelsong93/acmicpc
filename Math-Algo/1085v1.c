#include <stdio.h>

int main(){
    int x,y,w,h;
    scanf("%d%d%d%d", &x,&y,&w,&h);
    int height;
    if((h-y) > y){
        height = y;
    }
    else{
        height = h-y;
    }

    int width;
    if((w-x) > x){
        width = x;
    }
    else{
        width = w-x;
    }
    if(height > width){
        printf("%d", width);
    }
    else{
        printf("%d", height);
    }
}