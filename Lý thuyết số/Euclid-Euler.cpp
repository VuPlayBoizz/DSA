/*
Nếu p là số nguyên tó và 2^(p-1) cũng là số nguyên tố =>
(2^p-1)*(2^(p-1)) là số hoàn hảo
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool snt(int n){
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0)  return false;
    }
    return n > 1;
}
ll hoanHao(ll n){
    for(int i = 2; i <= 32; i++){
        if(snt(i) && snt((ll)pow(2,i) - 1)){
            ll h = (ll)(pow(2,i)-1) * pow(2,i-1);
            if(h == n)  return 1;
        }
    }
    return 0;
}
int main(){
    ll n ; cin >> n ;
    if(hoanHao(n))  cout << "YES";
    else    cout << "NO";
}