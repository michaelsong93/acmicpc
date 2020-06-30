#include <stdio.h>

int main(){
    int sum = 0;
    int timeTravel;
    for(int i = 0; i < 4; i++){
        scanf("%d", &timeTravel);
        sum+= timeTravel;
    }
    int minute = sum / 60;
    int seconds = sum % 60;

    printf("%d\n", minute);
    printf("%d\n", seconds);
}