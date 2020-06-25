#include <stdio.h>
int main(){
    int A,B,C;
    scanf("%d%d%d", &A,&B,&C);
    int num = A*B*C;
    char str[15];
    int count[10] = {0};
    sprintf(str,"%d",num);

    for(int i = 0; i < 10; i++){
        count[str[i]-'0']++;
    }
    for(int i =0; i<10;i++){
        printf("%d\n",count[i]);
    }
}