#include <stdio.h>

int main(){
    int testCase, students, apples, sum = 0;
    scanf("%d", &testCase);
    for(int i = 0; i < testCase; i++){
        int remainder = 0;
        scanf("%d%d", &students, &apples);
        remainder = apples % students;
        sum += remainder;
    }
    printf("%d", sum);

}