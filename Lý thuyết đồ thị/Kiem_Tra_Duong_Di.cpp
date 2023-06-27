#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, Q ;
vector<int> ke[10001];
bool visited[10001];

void inPut(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
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
    cin >> Q;
    while(Q--){
        int u, v; cin >> u >> v;
        memset(visited, false, sizeof(visited));
        BFS(u);
        if(visited[v] == false) cout << -1 << endl;
        else    cout << 1 << endl;
    }
}