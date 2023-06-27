#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool BinS(int a[], int n, int l, int r, int x){
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x)   return true;
        else if(a[m] < x)   return BinS(a, n, m + 1, r, x);
        else    return BinS(a, n, l , m - 1, x);
    }
    return false;
}

int main(){
    int n, x ; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(BinS(a, n, 0, n - 1, x)) cout << "YES";
    else    cout << "NO";
}