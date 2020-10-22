#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char first;
    while(1){

        int count = 0;
        char arr[550];
        int alpha[26] = {0};
        scanf("%[^\n]s", arr);
        if(arr[0] == '#'){
            break;
        }
        for(int i = 0; i < strlen(arr); i++){
            if(isalpha(arr[i])){
                if((arr[i] >= 'a') && (arr[i] <= 'z')){
                    alpha[arr[i] - 'a']++;
                }
                else if((arr[i] >= 'A') && (arr[i] <= 'Z')){
                    alpha[arr[i] - 'A']++;
                }
            }
        }

        int alphaCount = 0;
        for(int i = 0; i < 26; i++){
            if(alpha[i] >= 1){
                alphaCount++;
            }
        }
        printf("%d\n", alphaCount);
        getchar();
    }
}