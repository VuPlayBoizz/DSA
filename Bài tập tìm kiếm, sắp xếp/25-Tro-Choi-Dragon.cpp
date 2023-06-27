#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first < b.first)   return true;
    else    return false;
}

int main(){
    int n ; cin >> n;
    ll Strong ; cin >> Strong;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    int ok = 1;
    for(pair<int, int> x : v){
        if(x.first < Strong){
            Strong += x.second ;
        }
        else{
            ok = 0;
            break;
        }    
    }
    if(ok == 1) cout << "YES";
    else    cout << "NO";
}