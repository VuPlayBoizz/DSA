#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b){
    if(b == 0)  return a;
    return gcd(b, a % b);
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x = gcd(a[0], a[1]);
    for(int i = 1; i < n - 1; i++){
        x = gcd(x, a[i + 1]);
    }
    cout << x;

}