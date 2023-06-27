#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Sinh(string s){
    int i = s.size() - 1;
    while(i >= 1 && s[i] >= s[i + 1]){
        i--;
    }
    if(i == 0)  cout << "BIGGEST" << endl;
    else{
        int j = s.size();
        while(s[i] >= s[j]){
            j--;
        }
        swap(s[i], s[j]);
        sort(s.begin() + i + 1,s.end());
        cout << s << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int tt; cin >> tt;
        string s;   cin >> s; 
        cout << tt << ' ' ; 
        Sinh(s);
    }

}