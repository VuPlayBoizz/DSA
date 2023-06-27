//(A + B) % C = (A % C + B % C) %C
//(A - B) % C = (A % C - B % C) %C
//(A * B) % C = ((A % C) * (B % C)) %C
//(A)^B % C = ((A % C) ^ B) % C
// (A / B) % C = ((A % C) * (B^-1)) % C
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a, b ; cin >> a >> b;
    ll c = 1000000007;
    ll res = 1;
    for(int i = 1; i <= b; i++){
        res *= a;
        res %= c;
    }
    cout << res % c;

}