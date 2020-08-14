#include <stdio.h>

int main(){
    int testCase;
    scanf("%d", &testCase);
    char strCheck[testCase][105];
    int alpha[26] = {0};

    for(int i = 0; i < testCase; i++){
        scanf("%s", strCheck[i]);
    }

    int count = 0, swit = 0;
    for(int i = 0; i < testCase; i++){


        for(int j = 0; strCheck[i][j] != '\0'; j++){
            if(strCheck[i][j] != strCheck[i][j+1]){
                if(alpha[strCheck[i][j]-'a'] == 1){        
                    swit = 1;
                }    
                else{
                    alpha[strCheck[i][j]-'a'] = 1;
                }
            }
            
        }
        if(swit == 0){
                count++;
            }
        swit = 0;
        for(int i = 0; i < 26; i++){
            alpha[i] = 0;
        }
    }
    printf("%d", count);
}