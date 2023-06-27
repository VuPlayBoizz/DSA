#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, m;
    cin >> n >> m;
    set<int> a,b;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        b.insert(x);
    }
    for(auto x : a){
        if(b.count(x) == 1)   cout << x << ' ';
        else    b.insert(x);
    }
    cout << endl;
    for(auto x : b) cout << x << ' ';
}
