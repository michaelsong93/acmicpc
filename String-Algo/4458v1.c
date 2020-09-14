#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int N;
    char stringChar[35];
    scanf("%d", &N);
    getchar();
    for(int i = 0; i < N; i++){
        gets(stringChar);
        stringChar[0] = toupper(stringChar[0]);
        printf("%s\n", stringChar);
    }
}