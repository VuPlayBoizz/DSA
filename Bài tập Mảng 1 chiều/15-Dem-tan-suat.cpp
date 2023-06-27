#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n ; cin >> n ;
    int a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(auto x : mp){
        cout << x.first << ' ' << x.second << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        if(mp[a[i]] != 0){
            cout << a[i] << ' ' << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }
}