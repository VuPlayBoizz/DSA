#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
void Nhap(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
int Check(int a[] , int n){
    for(int i = 0 ; i < n - 1 ; i++){
        if(a[i] >= a[i+1])   return 0;
    }
    return 1 ;
}
int main(){
    int n ; cin >> n ;
    Nhap(a,n);
    if(Check(a,n))  cout << "YES";
    else cout << "NO";
}