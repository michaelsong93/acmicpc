#include <stdio.h>

int main(){
    char characters;
    while(scanf("%c", &characters) != EOF){
        printf("%c", characters);
    }
}