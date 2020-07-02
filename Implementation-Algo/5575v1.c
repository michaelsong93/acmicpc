#include <stdio.h>

int main(){
    int h1,m1,s1,h2,m2,s2;
    int seconds,minutes,hours;

    for(int i = 0; i < 3; i++){
        scanf("%d%d%d%d%d%d", &h1,&m1,&s1,&h2,&m2,&s2);
        if(s1 > s2){
            m2--;
            seconds = 60 - (s1-s2);
        }
        else{
            seconds = s2-s1;
        }

        if(m1 > m2){
            h2--;
            minutes = 60 - (m1-m2);
        }
        else{
            minutes = m2-m1;
        }

        hours = h2-h1;

        printf("%d %d %d\n", hours, minutes, seconds);
    }
    
}