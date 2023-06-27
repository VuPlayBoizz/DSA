#include<bits/stdc++.h>
using namespace std;
#define ll long long
// dua ve dang danh sach canh

vector<int> ke[1001];
bool visited[1001];
int n, m, s;

void inPut(){
    cin >> n >> m >> s;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        ke[u].push_back(v);
    }
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        sort(ke[i].begin(), ke[i].end());
    }
}

void DFS(int u){
    cout << u << ' ';
    visited[u] = true;
    //duyet cac dinh ke voi u
    for(int x : ke[u]){
        if(visited[x] == false){
            DFS(x);
        }
    }
}

int main(){
    inPut();
    DFS(s);
}