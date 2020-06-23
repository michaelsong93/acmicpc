#include <stdio.h>

int main(){
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    int num = A*B*C;
    
    char str[15];
    sprintf(str, "%d", num); //sprintf to store each num to str array
    // for(int i = 0; i < sizeof(str); i++){
    //     printf("num:%c \n", str[i]);
    // }

    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;
    int count_5 = 0;
    int count_6 = 0;
    int count_7 = 0;
    int count_8 = 0;
    int count_9 = 0;
    
    //for counting each num
    for(int i = 0; i < 15; i++){
        if(str[i] == '0'){
            count_0++;
        }
        else if(str[i] == '1'){
            count_1++;
        }
        else if(str[i] == '2'){
            count_2++;
        }
        else if(str[i] == '3'){
            count_3++;
        }
        else if(str[i] == '4'){
            count_4++;
        }
        else if(str[i] == '5'){
            count_5++;
        }
        else if(str[i] == '6'){
            count_6++;
        }
        else if(str[i] == '7'){
            count_7++;
        }
        else if(str[i] == '8'){
            count_8++;
        }
        else if(str[i] == '9'){
            count_9++;
        }
    }

    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", count_0,count_1,count_2,count_3,count_4,count_5,count_6,count_7,count_8,count_9);

}