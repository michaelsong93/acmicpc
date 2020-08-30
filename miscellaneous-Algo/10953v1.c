#include <stdio.h>

int main(){
    int testCase;
    scanf("%d", &testCase);
    
    int A,B;
    for(int i = 0; i < testCase; i++){
        scanf("%d",&A);
        getchar();
        scanf("%d",&B);
        printf("%d\n", A+B);
    }
}