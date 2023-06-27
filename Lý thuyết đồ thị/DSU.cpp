// DSU: Sijoint Set Union, Union Find
// Các tập hợp rời nhau.
// TÌm đỉnh là đại diện của 1 tập nào đấy

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n , m;
vector<int> ke[1001];
int parent[1001];
int s[1001];

void khoiTao(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        s[i] = 1;
    }
}

int find(int u){// Tìm cha của u
    if(u == parent[u])  return u;
    else{
        int x = find(parent[u]);
        parent[u] = x;
        return x;
    }
}

bool Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a == b)  return false;// cùng 1 tập hợp
    // if(a < b)   parent[b] = a;
    // else    parent[a] = b;
    // return true;
    if(s[a] >= s[b]){
        parent[b] = a;
        s[a] += s[b];
    }
    else{
        parent[a] = b;
        s[b] += s[a];
    }
    return true;
}

int main(){
    cin >> n >> m;
    khoiTao();
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        Union(x,y);
        /*if(Union(x, y) == false){
            cout << "1";
            return 0;
        }
        */
    }
    /* Kiểm tra đường đi
    int u, v;
    cin >> u >> v;
    if(find(u) == find(v))  cout << "YES";
    else    cout << "NO";
    */
   /* Thành phần liên thông
   int cnt = 0;
   set<int> se;
   for(int i = 1; i <= n; i++){
        se.insert(find(i));
   }
   cout << se.size();
   */
}