#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++)  cin >> a[i];
    for(int j = 0; j < m; j++)  cin >> b[j];
    multiset<int> se;
    for(auto x : a) se.insert(x);
    for(int j = 0; j < m; j++){
        auto it = se.upper_bound(b[j]);
        if(it != se.begin()){
            it--;
            cout << *it << endl;
            se.erase(it);
        }
        else{
            cout << -1 << endl;
        }
    }
}