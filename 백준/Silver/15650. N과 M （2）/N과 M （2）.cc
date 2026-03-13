#include <iostream>

using namespace std;

int visited[10];
int result[10];
int first;
int N, M;

void dfs(int count,int key){
    if(count == M){
        for(int i = 0; i< M;i++){
            cout << result[i] << ' ';
        }
        cout << '\n';
    }
    else{
        for(int i = key; i <= N; i++){
            if(visited[i] == 0){
                result[count] = i;
                visited[i] = 1;
                dfs(count+1,i);
                visited[i] = 0;
            }
        }
    }
}

int main(){
    cin >> N >> M;
    
    dfs(0,1);
    
}
