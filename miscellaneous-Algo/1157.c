#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char character[1000005];
    scanf("%s", character);
    int alphabet[26] = {0};

    for(int i = 0; i < strlen(character); i++){
        if(isupper(character[i])){
            int position = character[i] - 'A';
            alphabet[position]++;
        }
        else if(islower(character[i])){
            int position = character[i] - 'a';
            alphabet[position]++;
        }
    }

    int max = -1;
    int flag = 0;
    char max_alpha;
    for(int i = 0; i < 26; i++){
        if(alphabet[i] > max){
            max = alphabet[i];
            max_alpha = 65 + i;
        }
    }
    
    for(int i = 0; i < 26; i++){
        if(alphabet[i] == max){
            flag++;
        }
    }

    if(flag >= 2){
        printf("?");
    }
    else{
        printf("%c", max_alpha);
    }

}