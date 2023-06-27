#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dem(ll n){
    ll soUoc = 1;
    for(int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        while(n % i == 0){
            cnt++;
            n /= i;
        }
        soUoc *= ++cnt;
    }
    if(n != 1)  soUoc *= 2;
    if(soUoc % 2 == 1)  return 1;
    else return 0;
}
int main(){
    ll n ; cin >> n ;
    if(dem(n))  cout << "YES";
    else    cout << "NO";
}