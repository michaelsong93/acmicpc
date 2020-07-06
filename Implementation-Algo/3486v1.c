#include <stdio.h>

int reverse_int(int x){
    int reversed = 0;
    while(x != 0){
        reversed = reversed * 10;
        reversed = reversed + x % 10;
        x = x / 10;
    }
    return reversed;
}

int main(){
    int N;
    scanf("%d", &N);
    int A,B;
    
    for(int i = 0; i < N; i++){
        scanf("%d%d", &A,&B);

        int rev_A = reverse_int(A);
        int rev_B = reverse_int(B);
        int sum = rev_A + rev_B;
        int total = reverse_int(sum);
        
        printf("%d\n", total);    
    }
}