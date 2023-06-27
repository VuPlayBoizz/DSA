#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool nt(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)  return false;
    }
    return n > 1;
}
int main(){
    ll n; cin >> n;
    if(nt(n))   cout << "YES";
    else    cout << "NO";
    }