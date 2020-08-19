#include <stdio.h>
#include <string.h>

int main(){
    char characters[55];
    int fingers[8] = {0};
    scanf("%s", characters);

    for(int i = 0; i < strlen(characters); i++){
        if(characters[i] == '1' || characters[i] == 'Q' || characters[i] == 'A' || characters[i] == 'Z'){
            fingers[0]++;
        }
        else if(characters[i] == '2' || characters[i] == 'W' || characters[i] == 'S' || characters[i] == 'X'){
            fingers[1]++;
        }
        else if(characters[i] == '3' || characters[i] == 'E' || characters[i] == 'D' || characters[i] == 'C'){
            fingers[2]++;
        }
        else if(characters[i] == '4' || characters[i] == '5' || characters[i] == 'R' || characters[i] == 'T' || characters[i] == 'F' || characters[i] == 'G' || characters[i] == 'V' || characters[i] == 'B'){
            fingers[3]++;
        }
        else if(characters[i] == '6' || characters[i] == '7' || characters[i] == 'Y' || characters[i] == 'U' || characters[i] == 'H' || characters[i] == 'J' || characters[i] == 'N' || characters[i] == 'M'){
            fingers[4]++;
        }      
        else if(characters[i] == '8' || characters[i] == 'I' || characters[i] == 'K' || characters[i] == ','){
            fingers[5]++;
        }
        else if(characters[i] == '9' || characters[i] == 'O' || characters[i] == 'L' || characters[i] == '.'){
            fingers[6]++;
        }
        else if(characters[i] == '0' || characters[i] == '-' || characters[i] == '=' || characters[i] == 'P' || characters[i] == '[' || characters[i] == ']' || characters[i] == ';' || characters[i] == '\'' || characters[i] == '/'){
            fingers[7]++;
        }  
    }
    for(int i = 0; i < 8; i++){
        printf("%d\n", fingers[i]);
    }
}