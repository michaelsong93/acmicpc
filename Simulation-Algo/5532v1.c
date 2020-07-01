#include <stdio.h>

int main(){
    int l,b,a,c,d;
    scanf("%d%d%d%d%d", &l, &a, &b, &c, &d);

    int days = 0;
    while(1){
        b = b - d;
        a = a - c;
        days++;
        if(b <= 0 && a <= 0){
            break;
        }
    }
    l = l - days;
    printf("%d", l);
}