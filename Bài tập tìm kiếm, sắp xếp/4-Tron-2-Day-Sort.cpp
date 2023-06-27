#include<bits/stdc++.h>
using namespace std;
#define ll long long

void nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int main(){
    int n; cin >> n;
    int a[n], b[n];
    nhap(a, n);
    nhap(b, n);
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ' << b[i] << ' ';
    }
}
