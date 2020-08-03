#include <stdio.h>
#include <string.h>

int main(){
    char A[105];
    char B[105];
    char cpy[105];
    char operation;

    scanf("%s", A);
    getchar();
    scanf("%c", &operation);
    getchar();
    scanf("%s", B);

    if(operation == '*'){
        printf("1");
        for(int i = 0; i < strlen(A)+strlen(B)-2; i++){
            printf("0");
        }
    }
    else{
        if(strlen(A) >= strlen(B)){
            strcpy(cpy,A);
            cpy[strlen(A) - strlen(B)] += 1;
        }
        else{
            strcpy(cpy,B);
            cpy[strlen(B) - strlen(A)] += 1;
        }
        printf("%s", cpy);
    }

}