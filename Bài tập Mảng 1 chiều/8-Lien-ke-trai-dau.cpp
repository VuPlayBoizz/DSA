#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Nhap(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void Lietke(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        if(i == 0 && a[0] * a[1] < 0)   cout << a[0] << ' ';
        else if ((ll)a[i] * a[i-1] < 0 || (ll)a[i] * a[i+1] < 0 )  cout << a[i] << ' ';
        else if(i == n - 1 && (ll)a[n-1] * a[n-2] < 0) cout << a[n-1] ;
    }
}
int main(){
    int n ; cin >> n ;
    int a[n];
    Nhap(a,n);
    Lietke(a,n);
}