#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Nhap(int a[] , int n){
    for(int i = 0; i < n; i++){
       cin >> a[i] ;
    }
}
int Check(int a[], int n){
    for(int i = 0; i <= n/2; i++){
        if(a[i] != a[n - i - 1])    return 0;
    }
    return 1;
}
int main(){
    int n ; cin >> n ;
    int a[n];
    Nhap(a,n);
    if(Check(a,n))  cout << "YES";
    else cout << "NO";
}