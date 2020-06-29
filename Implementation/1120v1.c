#include <stdio.h>
#include <string.h>

char str_A[55];
char str_B[55];
int min_diff = 50;

void shift_right (){
    for(int i = 0; i <= strlen(str_B) - strlen(str_A); i++){
        int difference = 0;
        for(int j = 0; j < strlen(str_A); j++){
            if(str_A[j] != str_B[i+j]){
                difference++;
            }
        }
        if(min_diff > difference){
                min_diff = difference;
            }
    }
}


int main(){
    scanf("%s", str_A);
    scanf("%s", str_B);

    shift_right();
    
    printf("%d", min_diff);
}