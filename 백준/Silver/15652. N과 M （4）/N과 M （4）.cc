#include <iostream>

using namespace std;

int result[10];
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
            result[count] = i;
            dfs(count+1,i);
        }
    }
}

int main(){
    cin >> N >> M;
    
    dfs(0,1);
    
}
