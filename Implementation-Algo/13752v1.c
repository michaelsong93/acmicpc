#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        int histo;
        scanf("%d", &histo);
        for(int j = 0; j < histo; j++){
            printf("=");
        }
        printf("\n");
    }
}