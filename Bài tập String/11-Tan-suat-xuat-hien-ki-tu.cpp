#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; cin >> s;
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    for(auto x : mp)    cout << x.first << ' ' << x.second << endl;
    cout << endl;
        for(int i = 0; i < s.size(); i++){
        if(mp[s[i]] != 0){
            cout << s[i] << ' ' << mp[s[i]] << endl;
            mp[s[i]] = 0;
        }
    }
}