#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        int testCase;
        char character[25];
        char charcpy[100];
        scanf("%d", &testCase);
        scanf("%s", character);
        for(int k = 0; k < strlen(character); k++){
            for(int j = 0; j < testCase; j++){
                printf("%c", character[k]);
            }
        }
        printf("\n");
    }

}