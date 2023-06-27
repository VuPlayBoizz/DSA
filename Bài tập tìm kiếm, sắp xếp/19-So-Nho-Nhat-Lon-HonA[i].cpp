#include<bits/stdc++.h>
using namespace std;
#define ll long long

int First(int b[], int n, int l, int r, int x){
    int first = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(b[m] > x){
            first = m;
            r = m - 1;
        }
        else    l = m + 1;
    }
    return first;
}

int main(){
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b , b + n);
    for(int i = 0; i < n; i++){
        int pos = First(b, n, 0, n - 1, a[i]);
        if(pos != -1){
            cout << b[pos] << ' ';
        }
        else    cout << "_" << ' ';
    }
}