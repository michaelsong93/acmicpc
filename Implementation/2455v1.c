#include <stdio.h>

int main(){
    int on, off;
    int station[4];
    int people = 0;
    for(int i = 0; i<4; i++){
        scanf("%d%d", &off, &on);
        people += on - off;
        station[i] = people;
    }
    int max = 0;
    for(int i = 0; i < 4; i++){
        if(station[i] >= max){
            max = station[i];
        }
    }
    printf("%d", max);
}