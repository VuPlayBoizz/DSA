#include<bits/stdc++.h>
using namespace std;
bool nto(int n){
    for(int i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0)  return false;
    }
    return n > 1;
}
int Max(int n){
    int r = n % 10;
    while(n){
        if((n % 10) > r){
            return 0 ;
        }
        n = n / 10 ;
    }
    return 1 ;
}
int main(){
    int n ; cin >> n ;
    int dem = 0;
    for(int i = 1 ; i <= n ; i++){
        if(Max(i) && nto(i)){
            cout << i << ' ';
        }
    }
    cout << endl;
    for(int i = 1 ; i <= n ; i++){
        if(Max(i) && nto(i)){
            dem ++ ;
        }
    }  
    cout << dem << endl ;
}