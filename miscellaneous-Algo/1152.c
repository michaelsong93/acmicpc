#include <stdio.h>
#include <string.h>

int main(){
char character[1000005];
scanf("%[^\n]s", character);
char *ptr = strtok(character," ");

int count = 0;
while(ptr != NULL){
    ptr = strtok(NULL, " ");
    count++;
}

printf("%d", count);
}