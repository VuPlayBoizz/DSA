#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
    long long F0=0;
    long long F1=1;
    long long Fn;
    for(int i=2;i<=n;i++){
        Fn = F0+F1;
        F0=F1;
        F1=Fn;
    }
    cout << Fn;
}
int main(){
    int n; cin >>n;
    if(n == 0 || n == 1)    cout << n;
    else    fibo(n);
}