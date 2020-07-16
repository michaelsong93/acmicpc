#include <stdio.h>

// int main(){

// int N, num, sum = 0;
// scanf("%d", &N);
// char chars[105];
// int inx;
// while((num = getchar()) != '\n'){
//     chars[inx] = num - '0';
//     inx++;
// }

// for(int i = 0; i < N; i++){
//     sum += chars[i];
// }

// printf("%d", sum);



// }





#include <stdio.h>


//char split_char[105] = {0};
int main(){
    char split_char[105];
    int N,num = 0,sum = 0;
    scanf("%d,%s", &N, split_char);

    for(int i = 0; i < N; i++){
        num = split_char[i] - '0';
        sum += num;
    }

    // for(int i = 0; i <N; i++){
    //     printf("%d", split_char[i]);
    // }

    // int sum = 0;
    // for(int i = 0; i < N; i++){
    //     sum += split_char[i];
    // }

    printf("%d", sum);
}