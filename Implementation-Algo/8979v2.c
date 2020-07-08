#include <stdio.h>

int Board[1005][4];
int temp[1005];

void radix(int total){

    for(int color = 3; color >= 1; color--){
        int flag = 1;
        while(flag){
        flag = 0;
            for(int i = 0; i < total - 1; i++){
                if(Board[temp[i]][color] < Board[temp[i+1]][color]){
                    int t = temp[i];
                    temp[i] = temp[i+1];
                    temp[i+1] = t;
                    flag = 1;
                }
            }
        }
    }
}

int main(){
    int TotalCountries, Country;
    scanf("%d%d", &TotalCountries, &Country);

    for(int i = 0; i < TotalCountries; i++){
        scanf("%d%d%d%d", &Board[i][0], &Board[i][1], &Board[i][2], &Board[i][3]);
    }

    for(int i = 0; i < TotalCountries; i++){
        temp[i] = i;
    }

    radix(TotalCountries);
    
    int index = 0;
    for(int i = 0; i < TotalCountries; i++){
        if(Board[temp[i]][0] == Country){
            index = i;
            break;
        }
    }

    int rank = index+1;
    for(int i = index-1; i >= 0; i--){
        if(Board[temp[i]][1] == Board[temp[index]][1] &&
           Board[temp[i]][2] == Board[temp[index]][2] &&
           Board[temp[i]][3] == Board[temp[index]][3]){
               rank--;
           }
        else{
            break;
        }
    }
   
   printf("%d", rank);
   
    //  for(int i = 0; i < TotalCountries; i++){
    //      printf("%d", temp[i]);
    //  }
    
    
}