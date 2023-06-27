#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[100][100];
string ans = "";
vector<string> v;

void Nhap(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j, string s){
    if(i == n && j == n){
        v.push_back(s);
        return;
    }
    if(i + 1 <= n && a[i + 1][j] ){
        s += "D";
        a[i + 1][j] = 0;
        Try(i + 1, j, s);
        s.pop_back();
        a[i + 1][j] = 1;
    }
    if(j + 1 <= n && a[i][j + 1]){
        s+= "R";
        a[i][j + 1] = 0;
        Try(i, j + 1, s);
        s.pop_back();
        a[i][j + 1] = 1;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        Nhap();
        Try(1,1,ans);
        if(v.size() == 0)   cout << -1;
        else{
            for(auto x : v) cout << x << ' ';

        }
        cout << endl;
        v.clear();        
    }
}