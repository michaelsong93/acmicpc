#include <stdio.h>
#include <string.h>

int main(){

    int alphabet[26];
    for(int i = 0; i < 26; i++){
        alphabet[i] = -1;
    }

    char word[105];
    scanf("%s", word);

    for(int i = 0; i < strlen(word); i++){
        for(char j = 'a'; j <= 'z'; j++){
            if(word[i] == j){
            int position = word[i] - 97;
                if(alphabet[position] < 0){
                    alphabet[position] = i;
                }
            }
        }
    }

    for(int i = 0; i < 26; i++){
        printf("%d ", alphabet[i]);
    }
        


}