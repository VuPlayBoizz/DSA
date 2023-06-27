#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, ok;
string s;
vector<string> v;

void sinh(){
    int i = s.size()-1;
    while(i >= 0 && s[i] == '8'){
        s[i] = '6';
        i--;
    }
    if(i == -1)ok = 0;
    else s[i] = '8';
}

void init(){
    for(int k = 1;k <= 15;k++){
        s = string(k,'6');
        ok = 1;
        while(ok== 1){
            string tmp = s;
            reverse(tmp.begin(),tmp.end());
            v.push_back(s+tmp);
            sinh();
        }
    }
}
int main(){
    int t;cin >> t;
    init();
    while(t--){
        cin >> n;
        for(int i = 0;i < n;i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
