#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    string s; getline(cin , s);
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    cout << v[v.size() - 1];
    for(int i = 0; i < v.size() - 1; i++){
        cout << v[i][0];
    }
    cout << "@gmail.com";
}