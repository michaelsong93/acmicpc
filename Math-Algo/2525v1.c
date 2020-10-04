#include <stdio.h>

int main(){
    int hour, minutes, additional, hours;
    scanf("%d%d%d", &hour, &minutes, &additional);

    minutes = minutes + additional;
    if(minutes > 59){
        hours = minutes/60;
        minutes = minutes%60;
        hour += hours;
        if(hour > 23){
            hour = hour % 24;
        }
    }
    printf("%d %d", hour, minutes);
    // while(additional != 0){
    //     while(additional > 60){
    //         additional = additional - 60;
    //         minutes = minutes + 60;
    //         if(minutes > 60){
    //             hour++;
    //             minutes = minutes - 60;
    //         }
    //         if(hour > 23){
    //         hour = 0;
    //         }
    //     }
    //     else{
    //         minutes = minutes + additional;
    //         additional = 0;
    //         if(minutes > 60){
    //             hour++;
    //             minutes = minutes - 60;
    //         }
    //         if(hour > 23){
    //         hour = 0;
    //         }
    //     }
    // }
    // printf("%d %d", hour, minutes);

}