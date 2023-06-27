#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; cin >> s;
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    char res;
    int max = INT_MIN;
    for(auto x : mp){
        if(max <= x.second){
            max = x.second;
            res = x.first;
        }
    }
    cout << res << ' ' << max;
}