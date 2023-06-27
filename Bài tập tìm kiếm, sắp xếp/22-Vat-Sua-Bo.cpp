#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    sort(a, a + n, greater<int>());
    ll sum = 0;
    for(int i = 0; i < n; i++){
        a[i] -= i;
        if(a[i] >= 0){
            sum += a[i];
        }
    }
    cout << sum;
}