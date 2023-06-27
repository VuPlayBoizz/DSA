#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[100];

void Nhap(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
}

void In(int cnt){
    cout << "[";
    for(int i = 1; i <= cnt; i++){
        if(i != cnt)    cout << a[i] << ' ';
        else    cout << a[i];
    }
    cout << "]\n";
}

void Try(int cnt){
    if(cnt == n)    In(cnt);
    if(cnt - 1 == 0)    return;
    for(int i = 1; i < cnt; i++){
        a[i] += a[i + 1];
    }
    In(cnt - 1);
    Try(cnt - 1);
}

int main(){
    int t; cin >> t;
    while(t--){
        Nhap();
        Try(n);
    }
}