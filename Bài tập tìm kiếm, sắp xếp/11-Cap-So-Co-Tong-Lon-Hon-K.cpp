#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Bin_Search(int a[], int n, int l, int r, int x){
    int res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] > x){
            res = m;
            r = m - 1;
        }
        else    l = m + 1;
    }
    return res;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++){
        int x = k - a[i];
        int last = Bin_Search(a, n, i + 1, n - 1, x);
        if(last != -1){
            cnt += n - last;
        } 
    }
    cout << cnt;

}