#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int dmin = 10e9 + 1;
    for(int i = 1; i < n; i++){
        dmin = min(dmin, a[i] - a[i - 1]);
    }
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(a[i] - a[i-1] == dmin)   cnt++;
    }
    cout << dmin << ' ' << cnt;
}