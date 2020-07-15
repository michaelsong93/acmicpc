/*
 * My idea 07/15/2020:
 * 1. Scan the number of the players first to PlayersNum
 * 2. Scan the players name into multi-dimensional array of PlayersList[150][30]
 * 3. Create an array to count the first char of players
 * 4. For i = 0; i < PlayersNum, if any count[i] has more than 5, print its char
 * 5. else if, it does not, print "PREDAJA"
 * 
 */
#include <stdio.h>

int main(){
    int playersNum;
    char playersList[150][30];
    int count[26] = {0}; // since there are 26 alphabets
    
    // For 1.
    scanf("%d", &playersNum);
    
    // For 2 & 3. 
    for(int i = 0; i < playersNum; i++){
        scanf("%s", playersList[i]);
        count[playersList[i][0] - 'a']++;
    }
    
    // For 4. 
    int check = 0;
    for(int i = 0; i < 26; i++){
        if(count[i] >= 5){
            check++;
            printf("%c", i + 'a');
        }
    }

    //For 5.
    if(check == 0){
        printf("PREDAJA");
    }
}