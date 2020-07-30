#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    while(N > 0){
        int class;
        int sum = 0;
        int student[1005];

        scanf("%d", &class);
        for(int i = 0; i < class; i++){
            scanf("%d", &student[i]);
            sum = sum + student[i];
        }

        double avg = (double)sum / (double)class;
        
        int count = 0;
        for(int i = 0; i < class; i++){
            if(avg < student[i]){
                count++;
            }

        }
        double final = (((double)count/(double)class))*100;

        
        printf("%.3f%%\n", final);

        sum = 0;
        class = 0;
        count = 0;
        N--;
    }

}