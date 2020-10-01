#include <stdio.h>
#include <string.h>
int main(){
    int score[10] = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
    int num;
    long finalNum = 0;
    for(int i = 0; i < 3; i++){
        char color[10];
        scanf("%s", color);
        if(i == 0 || i == 1){
            if(strcmp(color,"black")==0){
                num = 0;
            }
            
            else if(strcmp(color,"brown")==0){
                num = 1;
            }
    
            else if(strcmp(color,"red")==0){
                num = 2;
            }
    
            else if(strcmp(color,"orange")==0){
                num = 3;
            }

            else if(strcmp(color,"yellow")==0){
                num = 4;
            }

            else if(strcmp(color,"green")==0){
                num = 5;
            }

            else if(strcmp(color,"blue")==0){
                num = 6;
            }
            
            else if(strcmp(color,"violet")==0){
                num = 7;
            }
            
            else if(strcmp(color,"grey")==0){
                num = 8;
            }
            
            else if(strcmp(color,"white")==0){
                num = 9;
            }
            if(i == 0){        
                finalNum += num;
            }
            else{
                finalNum = finalNum*10 + num;
            }
        }

        else if(i == 2){
            if(strcmp(color,"black")==0){
                finalNum = finalNum * score[0];
            }
            
            else if(strcmp(color,"brown")==0){
                finalNum = finalNum * score[1];
            }
    
            else if(strcmp(color,"red")==0){
                finalNum = finalNum * score[2];
            }
    
            else if(strcmp(color,"orange")==0){
                finalNum = finalNum * score[3];
            }

            else if(strcmp(color,"yellow")==0){
                finalNum = finalNum * score[4];
            }

            else if(strcmp(color,"green")==0){
                finalNum = finalNum * score[5];
            }

            else if(strcmp(color,"blue")==0){
                finalNum = finalNum * score[6];
            }
            
            else if(strcmp(color,"violet")==0){
                finalNum = finalNum * score[7];
            }
            
            else if(strcmp(color,"grey")==0){
                finalNum = finalNum * score[8];
            }
            
            else if(strcmp(color,"white")==0){
                finalNum = finalNum * score[9];
            }
        }
    }
    printf("%ld", finalNum);
}