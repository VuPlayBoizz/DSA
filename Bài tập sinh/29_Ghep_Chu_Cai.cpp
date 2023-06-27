#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
string s;
char c;

bool nguyenAm(char c){
    if(c == 'A' || c == 'E')    return true;
    else return false;
}

bool check(string s){
    for(int i = 1; i < s.size() - 1; i++){
        if(nguyenAm(s[i - 1]) == false &&  nguyenAm(s[i]) == true && nguyenAm(s[i + 1]) == false) return false;
    }
    return true;
}
int main(){
    cin >> c;
    s = "";
    for(int i = 'A'; i <= c; i++){
        s += i;
    }
    do{
        if(check(s) == true)    cout << s << endl;
    }
    while(next_permutation(s.begin(), s.end()));
}