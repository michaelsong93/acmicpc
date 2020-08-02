#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    getchar();
    char arr[105];
    scanf("%s", arr);

    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += arr[i] - '0';
    }
    printf("%d", sum);
}