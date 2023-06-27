#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
int first(int a[], int n, int x){
    int res = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            res = i + 1;
            break;
        }
    }
    return res;
}

int last(int a[], int n, int x){
    int res = -1;
    for(int i = n - 1; i >= 0; i--){
        if(a[i] == x){
            res = i + 1;
            break;
        }
    }
    return res;
}
int main(){
    int n, x; cin >> n >> x;
    int a[n];
    Nhap(a, n);
    cout << first(a, n, x) << ' ' << last(a, n, x);
}