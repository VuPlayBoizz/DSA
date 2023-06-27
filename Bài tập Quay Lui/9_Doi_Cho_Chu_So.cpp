#include<bits/stdc++.h>
using namespace std;
#define ll long long

int k;
string s;

void khoiTao(){
    cin >> k;
    cin >> s;
}

void Try(int i){
    if(k == 0 || i == s.size()- 1){
        cout << s << endl;
        return;
    }
    int idx = i;
    for(int j = i + 1; j < s.size(); j++){
        if(s[j] >= s[idx]){
            idx = j;
        }
    }
    if(idx != i){
        swap(s[i], s[idx]);
        --k;
    }
    Try(i + 1);
}

int main(){
    int t; cin >> t;
    while(t--){
        khoiTao();
        Try(0);
    }
}