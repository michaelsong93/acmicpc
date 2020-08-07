#include <stdio.h>
#include <string.h>

int main(){
    char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',
                        'P','Q','R','S','T','U','V','W','X','Y','Z'};


    char characters[20];
    scanf("%s", characters);

    //int length = strlen(characters);
    int time = 0;
    for(int i = 0; i < strlen(characters); i++){
        for(int j = 0; j < 26; j++){
            if(characters[i] == alphabet[j] && j <= 2){
                time += 3;
            }
            else if(characters[i] == alphabet[j] && (j > 2 && j <= 5)){
                time += 4;
            }
            else if(characters[i] == alphabet[j] && (j > 5 && j <= 8)){
                time += 5;
            }

            else if(characters[i] == alphabet[j] && (j > 8 && j <= 11)){
                time += 6;
            }

            else if(characters[i] == alphabet[j] && (j > 11 && j <= 14)){
                time += 7;
            }

            else if(characters[i] == alphabet[j] && (j > 14 && j <= 18)){
                time += 8;
            }

            else if(characters[i] == alphabet[j] && (j > 18 && j <= 21)){
                time += 9;
            }

            else if(characters[i] == alphabet[j] && (j > 21 && j <= 25)){
                time += 10;
            }
        }
    }
    printf("%d", time);
}