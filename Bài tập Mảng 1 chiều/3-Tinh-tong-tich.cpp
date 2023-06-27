#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void Tong(int a[], int n){
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum = ((sum % mod) + (a[i] % mod)) % mod;
    }
    cout << sum << endl;
}

void Tich(int a[], int n){
    ll vol = 1;
    for(int i = 0; i < n; i++){
        vol = ((vol % mod) * (a[i] % mod)) % mod;
    }
    cout << vol;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    Tong(a,n);
    Tich(a,n);
}