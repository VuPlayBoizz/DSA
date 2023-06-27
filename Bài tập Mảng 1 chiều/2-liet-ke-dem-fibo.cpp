#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll checkfibo(ll n){
    if(n == 1 || n == 0)    return 1;
    else{
        ll f0 = 0, f1 = 1;
        ll fn;
        for(int i = 2; i <= 93; i++){
            fn = f0 + f1;
            if(n == fn) return 1;
            f0 = f1;
            f1 = fn;
        }         
    }
    return 0;
}
int main(){
    int n; cin >> n;
    ll a[n];
    int ok = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(checkfibo(a[i]) == 1){
            ok = 1;
            cout << a[i] << ' ';
        }
    }
    if(ok == 0) cout << "NONE";
}