#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n ; cin >> n ;
    int a[n];
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        mp[a[i]]++;
        if(mp[a[i]] > 1){
            cout << a[i];
            return 0;
        }
    }
    cout << -1;
}