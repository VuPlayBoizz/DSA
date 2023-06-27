// sort(s.begin(), s.end())
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; cin >> s;
    multiset<char> ms;
    for(int i = 0; i < s.size(); i++){
        ms.insert(s[i]);
    }
    ll sum = 0;
    for(auto x : ms){
        sum = sum * 10 + x - '0';
    }
    cout << sum;
}