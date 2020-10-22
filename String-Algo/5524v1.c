#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int testCase;
    scanf("%d", &testCase);

    for(int i = 0; i < testCase; i++){
        char arr[25];
        scanf("%s", arr);
        for(int j = 0; j < strlen(arr); j++){
            arr[j] = tolower(arr[j]);
        }
        printf("%s\n", arr);
    }
}