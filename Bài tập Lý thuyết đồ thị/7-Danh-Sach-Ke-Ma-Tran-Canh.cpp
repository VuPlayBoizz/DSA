#include<bits/stdc++.h>
using namespace std;
#define ll long long

int a[1001][1001];
vector<pair<int, int>> v;

int main(){
    int n; cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            if(stoi(tmp) > i)   v.push_back({i,stoi(tmp)});
        }
    }
    for(pair<int, int> x : v){
        cout << x.first << ' ' << x.second << endl;
    }
}