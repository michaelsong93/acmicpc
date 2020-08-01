#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N,M, cnt = 0;
string A;
// string arr[500000];
vector<string> vec1, vec2, ans;

// int comp(const void* N,const void *M){
//     return (*((string*) N)).compare(*((string*) M));
// }

bool binary_Search(string s, int start, int end){
    if(start > end){
        return false;
    }

    int mid = (start + end)/2;
    int compar = vec1[mid].compare(s);

    if(compar == 0){
        return true;
    }
    else if(compar < 0){
        return binary_Search(s, mid+1, end);
    }
    else{
        return binary_Search(s, start, mid-1);
    }
}

bool hasString(string s){
    return binary_Search(s, 0, N-1);
}

int main(){

    // 속도가 scanf 랑 비슷
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    //scanf("%d%d", &N,&M);

    for(int i = 0; i < N; i++){
        string a;
        cin >> a;
        vec1.push_back(a);
    }

    for(int i = 0; i < M; i++){
        string a;
        cin >> a;
        vec2.push_back(a);
    }

   // qsort(arr,N,sizeof(string), comp);
    sort(vec1.begin(), vec1.end(), less<string>());
    sort(vec2.begin(), vec2.end(), less<string>());

    for(int i = 0; i < M; i++){
        if(hasString(vec2[i])){
            cnt++;
            ans.push_back(vec2[i]);
        }
    }

    cout << cnt << '\n';
    for(int i = 0; i < cnt; i++){
        cout << ans[i] << '\n';
    }

}