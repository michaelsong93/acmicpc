#include <stdio.h>
#include <ctype.h>
int main(){
    int N;
    scanf("%d", &N);
    getchar();
    for(int i = 0; i < N; i++){
        char stringChar[35];
        scanf("%[^\n]s", stringChar);
        getchar();
        stringChar[0] = toupper(stringChar[0]);
        printf("%s\n", stringChar);
    }
    // while(N--){
    //     char stringChar[35];
    //     scanf("%[^\n]s", stringChar);
    //     getchar();
    //     stringChar[0] = toupper(stringChar[0]);
    //     printf("%s\n", stringChar);
    // }
}
