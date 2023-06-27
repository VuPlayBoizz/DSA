#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, ok;
string s;

void sinh(){
    int i = s.size()-1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i == -1)ok = 0;
    else s[i] = '1';
}
int main(){
    int t;cin >> t;
    while(t-- > 0){
        int n; cin >> n;
        s = string(n/2,'0');
        ok = 1;
        while(ok == 1){
            cout << s;
            string tmp = s;
            reverse(tmp.begin(),tmp.end());
            cout << tmp << endl;
            sinh();
        }
    }
    return 0;
}
