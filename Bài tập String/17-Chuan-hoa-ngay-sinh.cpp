#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; cin >> s;
    if(s[1] == '/') s.insert(0,"0");
    if(s[4] == '/') s.insert(3,"0");
    cout << s;
}