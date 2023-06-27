#include<bits/stdc++.h>
using namespace std;
#define ll long long

void lower(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
}

int main(){
    string s ; getline(cin, s);
    lower(s);
    set<char> se;
    for(char x : s){
        if(islower(x))  se.insert(x);
    }
    if(se.size() == 26) cout << "YES";
    else    cout << "NO";
    return 0;
}