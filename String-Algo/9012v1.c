#include <stdio.h>

int main(){
    int N;
    char stringChar[55];
    int check = 0;
    int j = 0;
    int flag;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%s", stringChar);
        while(stringChar[j] != '\0'){
            if(stringChar[j] == '('){
            check--;
            }
            else if(stringChar[j] == ')' && check < 0){
            check++;
            }

            else if(stringChar[j] == ')' && check >= 0){
            check++;
            break;
            }

            j++;
        }
        if(check == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

        j = 0;
        check = 0;
    }

}