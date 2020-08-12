#include <stdio.h>
#include <string.h>

int main(){
    char character [105];
    scanf("%[^\n]s", character);
    int count = 0;
    for(int i = 0; character[i] != '\0';){
        if(character[i] == 'c' && character[i+1] == '='){
            count++;
            i = i + 2;
        }
        else if(character[i] == 'c' && character[i+1] == '-'){
            count++;
            i = i + 2;
        }
        else if(character[i] == 'd' && character[i+1] == '-'){
            count++;
            i = i + 2;
        }
        else if(character[i] == 'l' && character[i+1] == 'j'){
            count++;
            i = i + 2;
        }
        else if(character[i] == 'n' && character[i+1] == 'j'){
            count++;
            i = i + 2;
        }
        else if(character[i] == 's' && character[i+1] == '='){
            count++;
            i = i + 2;
        }
        else if(character[i] == 'z' && character[i+1] == '='){
            count++;
            i = i + 2;
        }
        else if(character[i] == 'd' && character[i+1] == 'z' && character[i+2] == '='){
            count++;
            i = i + 3;
        }
        else{
            i++;
            count++;
        }
    }
     printf("%d", count);
}