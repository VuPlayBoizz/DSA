#include<bits/stdc++.h>
using namespace std;
#define ll long long

string s;
void SinhGray(){
    cout << s[0];
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1])    cout << 0;
        else    cout << 1;
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        SinhGray();
    }
}
