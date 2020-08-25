#include <stdio.h>
#include <string.h>

int main(){
    char string;

    while(scanf("%c", &string) != EOF){
        printf("%c", string);
    }

}