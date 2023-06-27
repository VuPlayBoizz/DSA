#include<bits/stdc++.h>
using namespace std;
#define ll long long

void nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
int main(){
    int n ; cin >> n;
    int a[n];
    int cnt = 0;
    nhap(a, n);
    sort(a, a + n);
    for(int i = 0; i <= n - 1; i++){
        if(a[i] != a[i + 1])    cnt++;
    }
    cout << cnt;
}