#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    sort(a, a + n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += (1ll*a[i] * i);
        sum %= 1000000007;
    }
    cout << sum % 1000000007;
}