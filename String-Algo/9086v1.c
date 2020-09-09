#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d", &N);
    char stringChar[1005];
    char front,back;
    for(int i = 0; i < N; i++){
        scanf("%s", stringChar);
        front = stringChar[0];
        back = stringChar[strlen(stringChar)-1];
        printf("%c%c", front,back);
        printf("\n");
    }
}