#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Binary_Search1(int a[], int n, int l, int r, int x){
    int res = -1;

    while(l <= r){
        int m = (l + r) / 2;
        if(x == a[m]){
            res = m;
            r = m - 1;
        }
        else if(x <= a[m])  r = m - 1;
        else    l = m + 1;
    }
    return res;
}

int Binary_Search2(int a[], int n, int l, int r, int x){
    int res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(x == a[m]){
            res = m;
            l = m + 1;
        }
        else if(x <= a[m])  r = m - 1;
        else    l = m + 1;
    }
    return res;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    long long tong = 0;
    for(int i = 0; i < n; i++){
        int x = k - a[i];
        int first = Binary_Search1(a, n, i + 1, n - 1, x);
        int last = Binary_Search2(a, n, i + 1, n - 1,x);
        if(first != -1){
            tong += last - first + 1;
        }
    }
    cout << tong;
}