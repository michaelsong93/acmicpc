#include <stdio.h>
#define END 499999
int queue[500005];
int front = 0;
int back = 0;

void work(){
    front++;
    if(front > END){
        front = 0;
    }
    int save = queue[front];

    front++;
    if(front > END){
        front = 0;
    }
    
    back++;
    if(back > END){
        back = 0;
    }
    queue[back] = save;
}

int main(){
    int Card;
    scanf("%d", &Card);

    for(int i = 0; i < Card; i++){
        queue[i] = i + 1;
    }
    back = Card - 1;

    for(int i = 0; i < Card-1; i++){
        work();
    }

    printf("%d", queue[front]);
}