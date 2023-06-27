#include<bits/stdc++.h>
using namespace std;
void Tinh(long long n){
    long long Tong =0;
    for(long long i =5;i<=n;i*=5){
        Tong += n/i;
    }
    cout << Tong;
}
int main(){
        long long n ; cin >> n ;
        Tinh(n);
}
