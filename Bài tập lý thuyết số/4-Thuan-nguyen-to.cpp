#include<bits/stdc++.h>
using namespace std;
bool SNT(int n){
    for(int i = 2 ; i<=sqrt(n);i++){
        if(n%i==0)  return false;
    }
    return n > 1 ;
}
bool CSNT(int n){
    int sum = 0;
    while(n){
        sum+=(n%10);
        if((n%10)!=2&&(n%10)!=3&&(n%10)!=5&&(n%10)!=7)  return false;
        n/=10;
    }
    return SNT(sum);
}
int main(){
        int a , b;
        cin >> a >> b;
        int dem =0;
        for(int i = a;i<=b;i++){
            if(CSNT(i)&&SNT(i)){
                dem++;
            }
        }
        cout << dem;
}