#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, s, t;
vector<int> ke[1001];
bool visited[1001];
int parent[1001];


void inPut(){
    cin >> n >> m >> s >> t;
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

void DFS(int u){
    visited[u] = true;
    for(int v : ke[u]){
        if(visited[v] == false){
            parent[v] = u;
            DFS(v);
        } 
    }
}
int main(){
    inPut();
    DFS(s);
    if(visited[t] == false){
        cout << -1;
        return 0;
    } 
    else{
        vector<int> v;
        while(t != s){
            v.push_back(t);
            t = parent[t];
        }
        v.push_back(t);
        reverse(v.begin(), v.end());
        for(auto x : v) cout << x << ' ';
    }    
}