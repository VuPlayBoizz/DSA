#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, s , t;
vector<int> ke[1001];
bool visited[1001];
int parent[1001];
void inPut(){
    cin >> n >> m >> s >> t;
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
                parent[x] = v;
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main(){
    inPut();
    BFS(s);
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