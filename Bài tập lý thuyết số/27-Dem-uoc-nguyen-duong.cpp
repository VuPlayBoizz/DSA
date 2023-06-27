#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main(){
    int t; cin >> t;
    ll tich = 1;
    while(t--){
        int p, e; cin >> p >> e;
        e++;
        tich = ((tich % mod)*(e % mod)) % mod;
    }
    cout << tich;
}