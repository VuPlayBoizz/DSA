#include<bits/stdc++.h>
using namespace std;
#define ll long long

int a[10001][10001];
int main(){
    int n, m; cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int x, y;   cin >> x >> y;
        a[x][y] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}