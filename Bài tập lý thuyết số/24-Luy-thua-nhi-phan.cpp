#include <bits/stdc++.h>
#define ll long long
const int MOD=1e9+7;
using namespace std;
ll a, n;
ll tinh(ll a, ll n){
    if(n == 0) return 1;
    ll tmp = tinh(a, n / 2);
    if(n % 2 == 0){
        return (tmp * tmp) % MOD;
    }
    else{
        return ((tmp * tmp) % MOD * a) % MOD;
    }
}
int main() {
      cin >> a >> n;
      cout << tinh(a, n) << '\n';
}