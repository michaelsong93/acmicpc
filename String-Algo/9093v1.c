#include <string.h>
#include <stdio.h>

char characterArray[1005] = {0};
char charArr[25] = {0};
int main(){
    int testCase;
    scanf("%d", &testCase);
    getchar();
    while(testCase > 0){
        scanf("%[^\n]s", characterArray);
        characterArray[strlen(characterArray)] = ' ';
        characterArray[strlen(characterArray)+1] = '\0';
        getchar();

        int index = 0;
        int index2 = 0;
        while(characterArray[index] != '\0'){
            if(characterArray[index] == ' '){
                charArr[index2] = '\0';
                for(int i = strlen(charArr)-1; i >= 0; i--){
                    printf("%c", charArr[i]);
                }

                if(index != strlen(characterArray)-1){
                    printf(" ");
                }
                else{
                    printf("\n");
                }
                
                memset(charArr,'\0',sizeof(charArr)/sizeof(charArr[0]));
                index2 = 0;
                index++;

            }
            charArr[index2] = characterArray[index];
            index++;
            index2++;
        }
        memset(characterArray, '\0', sizeof(characterArray)/sizeof(characterArray[0]));
        testCase--;
    }
}