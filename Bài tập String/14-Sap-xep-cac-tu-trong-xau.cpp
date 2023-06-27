#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    string tmp;
    set<string> st;
    while(ss >> tmp){
        st.insert(tmp);
    }
    for(auto x : st)    cout << x << ' ';
}