#include<bits/stdc++.h>
using namespace std;
#define ll long long
int cnt[1000001];
void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void Solve(int a[], int n){
    int ok = 0;
    for(int i = 0; i < n; i++){
        if(cnt[a[i]] == 1){
            ok = 1;
            cout << a[i];
            break;
        }
        cnt[a[i]] = 1;
    }
    if(ok == 0) cout << -1;
    memset(cnt, 0, sizeof(cnt));
}

int main(){
    int n ; cin >> n ;
    int a[n];
    Nhap(a, n);
    Solve(a, n);
}