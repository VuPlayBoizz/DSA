#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Đánh dấu bằng bảng màu
// Trắng: chưa thăm
// Xám: Đang thăm
// Đen: đã thăm xong

vector<int> ke[1001];
int n, m, ok;
int color[1001];

void inPut(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        ke[u].push_back(v);
    }
    memset(color, 0, sizeof(color));
}

bool DFS(int u, int parent){
    color[u] = 1;// Đang thăm đỉnh
    for(int x : ke[u]){
        if(color[x] == 0){
            //cout << u << ' ' << x <<' ';
            if(DFS(x, u) == true)   return true;
        }
        // x đã được thăm và x ko là cha trực tiếp của u
        else if(color[x] == 1){
            return true;
        }
    }
    color[u] = 2; // màu đen: đã thăm xong đỉnh u
    return false;
}

int main(){
    inPut();
    ok = 0;
    for(int i = 1; i <= n; i++){
        if(color[i] == 0 && DFS(i, 0) == true){
            ok = 1;
            break;
        }
    }
    cout << ok;
}