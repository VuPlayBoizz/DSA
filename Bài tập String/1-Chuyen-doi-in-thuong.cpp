#include<bits/stdc++.h>
using namespace std;
#define ll long long
void InThuong(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    cout << s;
}
int main(){
    string s; getline(cin, s);
    InThuong(s);
}