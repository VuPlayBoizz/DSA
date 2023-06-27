#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool nt(ll n){
    if(n == 2)  return true;
    if(n % 2 == 0)  return false;
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0)  return false;
    }
    return n > 1;
}
int main(){
    ll n; cin >> n;
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(nt(i))   cnt++;
    }
    cout << cnt;
}