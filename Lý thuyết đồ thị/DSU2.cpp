#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;
vector<int> ke[1001];
int parent[1001];
int s[1001];
//DFS, BFS, DSU(Disjoint Set Union, Union Find) : Các tập hợp rời nhau O(1)
//Tìm đỉnh là đại diện của 1 tập hợp nào đấy trong đồ

void ktao(){
    for(int i = 1;i <= n;i++){
        parent[i] = i;
        s[i] = 1;
    }
}

int find(int u){ //tim cha cua u
    if(u == parent[u])return u;
    else {
        int x = find(parent[u]);
        parent[u] = x;
        return x;
    }
}

bool Union(int a,int b){
    a = find(a);
    b = find(b);
    if(a == b)return false;//cung 1 tap hop
    if(s[a] >= s[b]){
        parent[b] = a;
        s[a] += s[b];
    }
    else {
        parent[a] = b;
        s[b] += s[a];
    }
}


int main(){
    cin >> n >> m;
    ktao();
    for(int i = 1;i <= m;i++){
        int x,y; cin >> x >> y;
        Union(x,y);
    }
    set<int> se;
    for(int i = 1;i <= n;i++){
        se.insert(find(i));
    }
    cout << se.size();
    return 0;
}