#include <stdio.h>

char stringChar[100];

int main(){
    int num;
    scanf("%d", &num);
    getchar();
    for(int i = 1; i <= num; i++){
        scanf("%[^\n]s", stringChar);
        getchar();
        printf("%d. %s\n", i, stringChar);        
    }
}