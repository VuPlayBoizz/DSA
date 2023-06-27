#include<bits/stdc++.h>
using namespace std;
#define ll long long

int a[1001][1001];
// danh sach ke: mang cac vector
vector<int> ke[1000];
int main(){
    int n, m; cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        cout << i << " : ";
        sort(ke[i].begin(), ke[i].end());
        for(int x : ke[i]){
            cout << x << ' ';
        }
        cout << endl;
    }
}