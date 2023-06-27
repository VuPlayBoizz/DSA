#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 
}

int main(){
    int n ; cin >> n ;
    int a[n];
    Nhap(a, n);
    sort(a, a + n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        ll p = (ll)a[i]*i;
        sum = ((sum % mod) + (p % mod)) % mod;
    }
    cout << sum;
}