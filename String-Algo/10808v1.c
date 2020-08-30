#include <stdio.h>
#include <string.h>

int alphabet[26] = {0};
char input[105];

int main(){
    scanf("%s", input);

    for(int i = 0; i < strlen(input); i++){
        alphabet[input[i]-'a']++;
    }

    for(int i = 0; i < 26; i++){
        printf("%d ", alphabet[i]);
    }
}