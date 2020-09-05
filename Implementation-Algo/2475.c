#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    a*= a;
    b*= b;
    c*= c;
    d*= d;
    e*= e;
    int sum = a+b+c+d+e;
    f = sum % 10;
    printf("%d", f);
}