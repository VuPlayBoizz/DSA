#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s1, s2; cin >> s1 >> s2;
    set<char> giao,hop;
    for(int i = 0; i < s1.size(); i++){
        giao.insert(s1[i]);
    }
    for(int i = 0; i < s2.size(); i++){
        hop.insert(s2[i]);
    }
    for(auto x : giao){
        if(hop.count(x) == 1)   cout << x;
        else    hop.insert(x);
    }
    cout << endl;
    for(auto x : hop) cout << x;
}
//C2
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; getline(cin , s);
    string t; getline(cin, t);
    map<char, int> mp;
    for(auto x : s) mp[x] = 1;// da xuat hien o xau 1
    for(auto x : t){
        if(mp[x] == 1)  mp[x] = 2;// da xuat hien o 2 xau
        else if(mp[x] != 2){
            mp[x] = 3;// xuat hien o xau 2
        }
    }
    for(auto x : mp){
        if(x.second == 2)  cout << x.first;
    }
    cout << endl;
    for(auto x : mp){
        cout << x.first;
    }
}