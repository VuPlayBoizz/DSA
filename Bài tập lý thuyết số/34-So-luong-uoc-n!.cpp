#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int soMu(int n, int p){
    int ans = 0;
    for(int i = p; i <= n; i *= p){
        ans += n/i;
    }
    return ans;
}
bool nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)  return false;
    }
    return n > 1;
}
ll DemUoc(int n){
    ll res = 1;
    for(int i = 1; i <= n; i++){
        if(nt(i)){
            ll tmp = soMu(n, i) + 1;
            res = ((res % mod)*(tmp % mod))% mod;
        }
    }
    return res;
}
int main(){
    int n ; cin >> n ;
    cout << DemUoc(n);
}