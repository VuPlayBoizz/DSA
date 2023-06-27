#include<bits/stdc++.h>
using namespace std;
#define ll long long

void nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

bool Binary_Search(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(x == a[m])   return true;
        else if(x <= a[m])  r = m - 1;
        else    l = m + 1;
    }
    return false;
}

int main(){
    int n; cin >> n;
    int a[n];
    nhap(a, n);
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if(Binary_Search(a,n,x) == true)    cout << "YES"<< endl;
        else    cout << "NO" << endl;
    }
}