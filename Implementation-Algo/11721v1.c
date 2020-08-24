#include <stdio.h>
#include <string.h>

int main(){
    char string[105];
    scanf("%s", string);

    for(int i = 0; i <strlen(string); i++){
        if(i > 0){
            if(i % 10 == 0){
                printf("\n");
            }
        }
        printf("%c", string[i]);
    }

}