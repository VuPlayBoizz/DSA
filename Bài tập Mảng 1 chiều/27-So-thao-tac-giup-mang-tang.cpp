#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
int main(){
    int n ; cin >> n ;
    int a[n];
    Nhap(a, n);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        while(a[i] >= a[i + 1]){
            ++a[i + 1];
            ++cnt;
        }
    }
    cout << cnt;
}