#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, d; cin >> n >> d;
    int a[n];
    ll cnt = 0;
    for(int i = 0; i < n; i++)  cin >> a[i];
    for(int i = 1; i < n; i++){
        if(a[i] <= a[i - 1]){
            int k = (a[i - 1] - a[i] + 1);
            int x;
            if(k % d == 0){
                x = k / d;
            }
            else{
                x = (k / d) + 1;
            }
            a[i] += x * d;
            cnt += x;
        }
    }
    cout << cnt;
}