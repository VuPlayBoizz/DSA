#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[10001], ok;
string s;

void Sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i == -1) ok = 1;
    else    s[i] = '1';
}

bool Doixung(string s){
    int l = 0;
    int r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r])    return false;
        l++; r--;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        s = string(n,'0');
        ok = 0;
        while(ok == 0){
            if(Doixung(s))  cout << s << endl;
            Sinh();
        }
    }
}