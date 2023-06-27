#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[100];
vector<string> v;

void Nhap(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
}

void In(int cnt){
    string tmp = "[";
    for(int i = 1; i <= cnt; i++){
        if(i != cnt)    tmp += to_string(a[i]) + " ";
        else    tmp += to_string(a[i]) + "]";
    }
    v.push_back(tmp);
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
        reverse(v.begin(), v.end());
        for(auto x : v) cout << x << ' ';
        v.clear();
        cout << endl;
    }
}