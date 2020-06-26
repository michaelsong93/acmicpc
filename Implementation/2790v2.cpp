#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int racers[300005];
    int num;
    scanf("%d",&num);
    
    for(int i = 0; i < num; i++){
        scanf("%d", &racers[i]);
    }

    sort(racers, racers+num);

    int maximum = 0;
    int count = 1;
    for(int i = num - 2; i >= 0; i--){
        maximum = max(maximum,racers[i+1]+num-i-1);
        if(maximum <= racers[i] + num){
            count++;
        }
    }
    printf("%d", count);
}