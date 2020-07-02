/**
 * 
 * Given:
 * student nums... for each pop, and total seconds 
 * My Idea:
 *  scan first two inputs [2,20] --> students, seconds
 *  For <= seconds, insert 1 to seconds into an array of seconds
 *  
 *  count = 0;
 *  for < student nums,
 *      scan the point where each student pops,
 *          change the seconds to 0 for the first each pop
 *              for < studetns nums; j += 
 *                  if arr[j] == 0, 
 * 
 **/

#include <stdio.h>

int main(){
    int students;
    int seconds;
    scanf("%d%d", &students, &seconds);
    
    int arr[seconds];
    for(int i = 0; i < seconds; i++){
        arr[i] = i + 1;
    }

    int value;
    while(students != 0){
        scanf("%d", &value);

        // for(int i = 0; i <= seconds; i++){
        //     if(arr[i] == 0){
        //         continue;
        //     }

            for(int j = 0; j <= seconds; j++){
                if(arr[j] == 0){
                    continue;
                }

                if(arr[j] % value == 0){
                    arr[j] = 0;
                }
            }

        //}
        students--;
    }

    // for(int i = 0; i < seconds; i++){
    //     printf("%d\t", arr[i]);
    // }

    int count = 0;
    for(int i = 0; i < seconds; i++){
        if(arr[i] == 0){
            count++;
        }
    }

    printf("%d", count);
}