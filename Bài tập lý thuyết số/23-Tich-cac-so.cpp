#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int main(){
    int n ; cin >> n ;
    ll tich = 1;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        tich = ((tich % mod) * (x % mod)) % mod;
    }
    cout << tich;
}