#include<bits/stdc++.h>
using namespace std;
bool nt(long long n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)  return false;
    }
    return n > 1;
}
int sum(long long n){
    long long tong = 0;
    while(n){
        tong += n % 10;
        n /= 10;
    }
    return tong;
}
long long Ktra(long long n){
    if(n==0||n==1)  return 1;
    long long f0=0,f1=1;
    long long fn;
    for(int i=3;i<=93;i++){
        fn=f0+f1;
        f0=f1;
        f1=fn;
        if(sum(n)==fn)   return 1;
    }
    return 0;
}
int main(){
    int n; cin >> n;
    for(int i = 2; i <= n; i++){
        if(Ktra(i) && nt(i)) cout << i << ' ';
    }
}