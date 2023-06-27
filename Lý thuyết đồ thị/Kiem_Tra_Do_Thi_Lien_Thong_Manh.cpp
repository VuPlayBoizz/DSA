#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;
vector<int> ke[10001];
bool visited[10001];

void inPut(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
    for(int i = 1; i <= n; i++){
        sort(ke[i].begin(), ke[i].end());
    }
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(q.empty() == false){
        int v = q.front();
        q.pop();
        for(int x : ke[v]){
            if(visited[x] == false){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main(){
    inPut();
    int ok = 1;
    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        BFS(i);
        for(int j = 1; j <= n; j++){
            if(visited[j] == false){
                cout << 0;
                return 0;
            }
        }
    }
    cout << 1;
}