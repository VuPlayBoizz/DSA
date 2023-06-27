#include<bits/stdc++.h>
using namespace std;
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
bool Uoc(int n){
    int dem = 0 ;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            dem++ ;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1)   dem += 1 ;
    if(dem >= 3 )   return true;
    else return false ;
}
int main(){
    int a , b ; cin >> a >> b ;
    int Ok = 0 ;
    for(int i = a ; i <= b ; i++){
        if(SoTN(i) && Uoc(i)){
            Ok = 1 ;
            cout << i << ' ';
        }
    }
    if(Ok == 0)  cout << -1 ;
}