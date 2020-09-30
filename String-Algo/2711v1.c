#include <stdio.h>
#include <string.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int ind;
        char string[85];
        scanf("%d%s", &ind, string);
        for(int i = ind; i < strlen(string); i++){
            string[i-1] = string[i];

        }
        for(int i = 0; i < strlen(string)-1; i++){
            printf("%c", string[i]);
        }
        printf("\n");
    }
}