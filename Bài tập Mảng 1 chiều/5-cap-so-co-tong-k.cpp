#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Nhap(int a[] , int n){
    for(int i = 0; i < n; i++){
       cin >> a[i] ;
    }
}

int main(){
    int n, k ; cin >> n >>k ;
    int a[n];
    int dem = 0;
    Nhap(a,n);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j <= n; j++){
            if((a[i] + a[j]) == k)  dem ++;
        }
    }
    cout << dem;
}