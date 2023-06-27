#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n ; cin >> n;
    map<string, int> mp;
    cin.ignore();
    while(n--){
        string s; getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        vector<string> v;
        stringstream ss(s);
        string tmp;
        string res ="";
        while(ss >> tmp)    v.push_back(tmp);
        res += v[v.size() - 1];
        for(int i = 0; i < v.size() - 1; i++){
            res += v[i][0];
        }
        if(mp[res] == 0)    cout << res << "@gmail.com" << endl;
        else    cout << res << mp[res] + 1 << "@gmail.com" << endl;
        mp[res] ++;
    }
}