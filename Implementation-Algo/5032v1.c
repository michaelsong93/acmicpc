#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    int total = 0;
    int bottles = a+b;

    while(bottles >= c){
        int changed = bottles / c;
        int unchanged = bottles % c;
        total += changed;

        bottles = changed + unchanged;
    }

    printf("%d", total);

}