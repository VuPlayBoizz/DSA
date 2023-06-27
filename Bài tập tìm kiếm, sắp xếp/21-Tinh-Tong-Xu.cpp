#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Check(int a[], int n){
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > sum + 1){
            cout << sum + 1;
            return;
        }
        sum += a[i];
    }
    cout << sum + 1;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    Check(a, n);
}
