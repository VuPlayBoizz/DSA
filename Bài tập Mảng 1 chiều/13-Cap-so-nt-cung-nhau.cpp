#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
void Nhap(int a[], int n){
   for(int i = 0 ; i < n ; i++){
      cin >> a[i];
   }
}
int gcd(int x, int y){
    if(y == 0)  return x;
    return gcd(y,x%y);
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    ll cnt = 0;
    for(int i = 0 ; i < n ; i ++){
        for(int j = i+1 ; j < n ; j ++){
            if(gcd(a[i],a[j])==1) cnt ++;
        }
    }
    cout << cnt;
}