#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d", &x, &y);

    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int totalDays = 0;
    for(int i = 1; i < x; i++){
        totalDays += month[i-1];    
    }
    totalDays += y;
    totalDays = totalDays % 7;

    switch(totalDays){
        case 1: printf("MON");
                break;
        
        case 2: printf("TUE");
                break;
        
        case 3: printf("WED");
                break;

        case 4: printf("THU");
                break;

        case 5: printf("FRI");
                break;

        case 6: printf("SAT");
                break;

        default: printf("SUN");
                break;
    }

}

