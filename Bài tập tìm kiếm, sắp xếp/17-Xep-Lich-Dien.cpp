#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second < b.second)     return true;
    else    return false;
}

int main(){
    int n; cin >> n;
    vector<pair<int, int>> v;
    for(int i = 1; i <= n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(), v.end(), cmp);
    int end = v[0].second, cnt = 1;
    for(int i = 1; i < v.size(); i++){
        if(v[i].first > end){
            cnt++;
            end = v[i].second;
        }
    }
    cout << cnt;
}