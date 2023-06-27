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
    for(int i = 2; i <= sqrt(n); i++){
        if(nt(i))   cout << (ll)i*i << ' ';
    }

}