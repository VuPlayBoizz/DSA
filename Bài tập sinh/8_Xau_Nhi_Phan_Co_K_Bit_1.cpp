#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, ok, a[10001], k;

void khoiTao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void Sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0)  ok = 1;
    else{
        a[i] = 1;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        ok = 0;
        khoiTao();
        vector<string> v;
        while(ok == 0){
            string tmp = "";
            int cnt = 0;
            for(int i = 1; i <= n; i++){
                tmp += to_string(a[i]);
                if(a[i] == 1)   cnt++;
            }
            if(cnt == k)    v.push_back(tmp);
            Sinh();
        }
        for(auto x : v) cout << x << endl;
    }

}