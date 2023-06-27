#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a , b; cin >> a >> b;
    int c = sqrt(a);
    int d = sqrt(b);
    if((ll)c*c != a)   c++;
    for(int i = c; i <= d; i++){
        cout << (ll)i * i << ' ';
    }
}