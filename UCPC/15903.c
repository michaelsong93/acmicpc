#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
    if( *(long long*)a == *(long long*)b )
        return 0;
    else if(*(long long*)a > *(long long*)b)
        return 1;
    else
        return -1;
}

int main(){
    int N,M;
    scanf("%d%d", &N,&M);

    long long arr[1005];
    for(int i = 0; i < N; i++){
        scanf("%lld", &arr[i]);
    }

    for(int i = 0; i < M; i++){
        qsort(arr,N,sizeof(long long), cmpfunc);
        long long minimum1 = arr[0];
        long long minimum2 = arr[1];
        long long temp2 = minimum1 + minimum2;
        arr[0] = temp2;
        arr[1] = temp2;

   }
    long long sum = 0;
    for(int i = 0; i < N; i++){
        sum = sum + arr[i];
    }
    printf("%lld", sum);
}