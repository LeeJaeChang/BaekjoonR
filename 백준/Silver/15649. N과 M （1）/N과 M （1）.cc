#include <iostream>

using namespace std;

int visited[10];
int result[10];
int N, M;

void dfs(int count){
    if(count == M){
        for(int i = 0; i< M;i++){
            cout << result[i] << ' ';
        }
        cout << '\n';
    }
    else{
        for(int i = 1; i <= N; i++){
            if(visited[i] == 0){
                result[count] = i;
                visited[i] = 1;
                dfs(count+1);
                visited[i] = 0;
            }
        }
    }
}

int main(){
    cin >> N >> M;
    
    dfs(0);
    
}
