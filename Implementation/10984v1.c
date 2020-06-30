#include <stdio.h>
#include <math.h>

int main(){
    int Terms, Nums, Credits;
    float Grades;

    scanf("%d", &Terms);
    int TotalCredits = 0;
    float TotalGrades = 0.0;
    while(Terms != 0){
        scanf("%d", &Nums);
        for(int i = 0; i < Nums; i++){
            scanf("%d%f", &Credits, &Grades);
            TotalCredits += Credits;
            TotalGrades += (float)Grades * Credits;
        }
        TotalGrades = TotalGrades / (float)TotalCredits;
        
        printf("%d %.1f\n", TotalCredits, TotalGrades);
        TotalGrades = 0;
        TotalCredits = 0;
        Terms--;
    }
}