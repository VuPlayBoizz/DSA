#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, l; cin >> n >> l;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    sort(a, a + n);
    double d = max(a[0], l - a[n - 1]);
    for(int i = 1; i < n; i++){
        d = max(d,((double)a[i] - a[i - 1])/2);
    }
    cout << fixed << setprecision(10) << d;
}