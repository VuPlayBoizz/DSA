#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(getline(ss, tmp, '/')){
        v.push_back(tmp);
    }
    for(int i = 0; i < v.size() - 1; i++){
        if(v[i].size() == 1) cout << 0 << v[i] << "/";
        else cout << v[i] << "/";
    }
    cout << v[v.size() - 1];
}