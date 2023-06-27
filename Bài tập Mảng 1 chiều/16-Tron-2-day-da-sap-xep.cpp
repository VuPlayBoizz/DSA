#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}


int main(){
    int n, m ; cin >> n >> m;
    int a[n] , b[m];
    Nhap(a, n);
    Nhap(b, m);
    int c[n + m];
    int i = 0, j = 0, cnt = 0;
    while(i < n && j < m){
        if(a[i] <= b[j]){
            c[cnt++] = a[i];
            i++;
        }
        else{
            c[cnt++] = b[j];
            j++;
        }
    }
    while(i < n)    c[cnt++] = a[i++];
    while(j < m)    c[cnt++] = b[j++];
    for(int i = 0; i < n + m; i++){
        cout << c[i] << ' ';
    }
}