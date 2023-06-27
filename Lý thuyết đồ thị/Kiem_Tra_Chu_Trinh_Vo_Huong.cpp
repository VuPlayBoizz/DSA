#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> ke[1001];
bool visited[1001];
vector<int> topo;
int n, m, ok;
int par[1001];

void inPut(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        sort(ke[i].begin(), ke[i].end());
    }
}

bool DFS(int u, int parent){
    visited[u] = true;
    for(int x : ke[u]){
        if(visited[x] == false){
            cout << u << ' ' << x <<' ';
            if(DFS(x, u) == true)   return true;
        }
        // x đã được thăm và x ko là cha trực tiếp của u
        else if(x != parent){
            return true;
        }
    }
    return false;
}

bool BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int x : ke[u]){
            if(visited[x] == false){
                q.push(x);
                visited[x] = true;
                par[x] = u;
            }
            else if(x != par[u]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    inPut();
    ok = 0;
    for(int i = 1; i <= n; i++){
        if(visited[i] == false && DFS(i, 0) == true){
            ok = 1;
        }
    }
    cout << endl;
    cout << ok;
}