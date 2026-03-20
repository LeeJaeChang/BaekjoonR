#include <iostream>
#include <algorithm>

using namespace std;

int result[10];
int visited[10001];
int N, M;
int * arr;

void dfs(int count){
    if(count == M){
        for(int i = 0; i< M;i++){
            cout << result[i] << ' ';
        }
        cout << '\n';
    }
    else{
        for(int i =0; i< N; i++){
            if(!visited[arr[i]]){
                result[count] = arr[i];
                visited[arr[i]] = 1;
                dfs(count+1);
                visited[arr[i]] = 0;
            }
        }
    }
}

int main(){
    cin >> N >> M;
    arr = new int[N]{};
    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
    sort(arr,arr+N);
    dfs(0);
}
