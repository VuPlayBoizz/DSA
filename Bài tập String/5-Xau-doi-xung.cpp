#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool Check(string s){
    for(int i = 0; i <= s.size() / 2; i++){
        if(s[i] != s[s.size() - 1 - i]) return false;
    }
    return true;
}
int main(){
    string s; getline(cin, s);
    string tmp;
    stringstream ss(s);
    vector<string> v;
    while(ss >> tmp)    v.push_back(tmp);
    for(int i = 0; i < v.size(); i++){
        if(Check(v[i])) cout << v[i] << ' ';
    }

}