#include<bits/stdc++.h>
using namespace std;
#define ll long long

string chuanHoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while(ss >> tmp){
            chuanHoa(tmp);
            v.push_back(tmp);
        }    
        for(auto x : v) cout << x << ' ';
        cout << endl;
    }
}