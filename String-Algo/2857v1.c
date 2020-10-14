#include <stdio.h>
#include <string.h>

int main(){
    
    int flag = 0;
    for(int i = 0; i < 5; i++){
        char stringFBI[10];
        scanf("%s", stringFBI);
        for(int j = 0; j < strlen(stringFBI); j++){
            if(stringFBI[j] == 'F' && stringFBI[j+1] == 'B' && stringFBI[j+2] == 'I'){
                flag = 1;
                printf("%d ", i+1);
                break;
            }
        }
    }

    if(flag == 0){
        printf("HE GOT AWAY!");
    }

}