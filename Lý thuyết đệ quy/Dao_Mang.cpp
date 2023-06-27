#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Dao(int a[], int n, int l, int r){
    if(l <= r){
        swap(a[l], a[r]);
        l++;
        r--;
        Dao(a,n, l, r);
    }
    return;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    Dao(a, n, 0, n - 1);
    for(int i = 0; i < n; i++)  cout << a[i] << ' ';
}