#include<bits/stdc++.h>
using namespace std;
long long Ktra(long long n){
    if(n==0||n==1)  return 1;
    long long f0=0,f1=1;
    long long fn;
    for(int i=3;i<=93;i++){
        fn=f0+f1;
        f0=f1;
        f1=fn;
        if(n==fn)   return 1;
    }
    return 0;
}
int main(){
        long long n; cin >> n;
        if(Ktra(n)) cout <<"YES";
        else cout <<"NO";
}