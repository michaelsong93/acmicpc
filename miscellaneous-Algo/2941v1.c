#include <stdio.h>
#include <string.h>

int main(){
    char character [105];
    scanf("%[^\n]s", character);
    int count = 0;
    for(int i = 0; i < strlen(character); i++){
        for(int j = i+1; j < i+1; j++){
            if(character[i] == 'c' && character[j] == '='){
                count++;
                i = j + 1;
            }
            else if(character[i] == 'c' && character[j] == '-'){
                count++;
                i = j + 1;
            }
            else if(character[i] == 'd' && character[j] == '-'){
                count++;
                i = j + 1;
            }
            else if(character[i] == 'l' && character[j] == 'j'){
                count++;
                i = j + 1;
            }
            else if(character[i] == 'n' && character[j] == 'j'){
                count++;
                i = j + 1;
            }
            else if(character[i] == 's' && character[j] == '='){
                count++;
                i = j + 1;
            }
            else if(character[i] == 'z' && character[j] == '='){
                count++;
                i = j + 1;
            }
            // for(int k = j + 1; k < strlen(character); k++){
            //     if(character[i] == 'd' && character[j] == 'z' && character[k] == '='){
            //         count++;
            //         i = k + 1;
            //         continue;
            //     }
            // }

        }
        count++;
    }
    printf("%d", count);
}