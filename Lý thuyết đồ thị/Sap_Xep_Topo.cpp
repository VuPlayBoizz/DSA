// Lưu ý
/* Đồ thị mà có chu trình thì ko có thứ tự topo*/
//DFS
//BFS(kahn): Xóa dần đỉnh
#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> ke[1001];
bool visited[1001];
vector<int> topo;
int n, m;

void inPut(){
    cin >> n >> m;
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
    visited[u] = true;
    for(int x : ke[u]){
        if(visited[x] == false){
            DFS(x);
        }
    }
    topo.push_back(u);
}

int main(){
    inPut();
    for(int i = 1; i <=n; i++){
        if(visited[i] == false){
            DFS(i);
        }
    }
    reverse(topo.begin(), topo.end());
    for(auto x : topo)  cout << x << ' ';
}
// BFS
#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> ke[1001];
bool visited[1001];
int n, m;
int in[1001];

void inPut(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        ke[u].push_back(v);
        in[v]++;
    }
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        sort(ke[i].begin(), ke[i].end());
    }
}

void BFS(int u){
    queue<int> q;
    for(int i = 1; i <= n; i++){
        if(in[i] == 0){
            q.push(i);
            visited[i] = true;
        }
    }
    while(!q.empty()){
        int head = q.front();
        q.pop();
        cout << head << ' ';
        for(int x : ke[head]){
            in[x]--;
            if(in[x] == 0){
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

int main(){
    inPut();
    for(int i = 1; i <= n; i++){
        if(visited[i] == false){
            BFS(i);
        }
    }
}