#include<bits/stdc++.h>
using namespace std;
bool Tong_8(int n){
    int sum = 0;
    while(n){
        sum += n % 10 ;
        n /= 10 ;
    }
    if(sum%10==8)    return true;
    return false ;
}
bool LocPhat(int n){
    while(n){
        if((n % 10) == 6){
           return 1 ;
        }
        n /= 10 ;
    }
    return false;
}
bool SoTN(int n){
    int tmp = n;
    int k = 0 ;
    while(n){
        k = k * 10 + n % 10 ;
        n /= 10 ;
    }
    if(k == tmp)    return true;
    return false;
}
int main(){
    int a , b ;
    cin >> a >> b;
    int Ok = 0;
    for( int i = a ; i <= b ;i++){
        if(Tong_8(i) && LocPhat(i) && SoTN(i)){
            Ok = 1;
            cout << i << " ";
        }
    }
    if(Ok == 0) cout << -1 ;
}