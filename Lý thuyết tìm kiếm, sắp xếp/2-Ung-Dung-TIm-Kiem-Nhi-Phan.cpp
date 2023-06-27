#include<bits/stdc++.h>
using namespace std;
#define ll long long

void nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int Binary_Search1(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(x == a[m]){
            res = m;
            r = m - 1;
        }
        else if(x <= a[m])  r = m - 1;
        else    l = m + 1;
    }
    return res;
}

int Binary_Search2(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(x == a[m]){
            res = m;
            l = m + 1;
        }
        else if(x <= a[m])  r = m - 1;
        else    l = m + 1;
    }
    return res;
}

int Binary_Search3(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(x <= a[m]){
            res = m;
            r = m - 1;
        }
        else    l = m + 1;
    }
    return res;
}

int Binary_Search4(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(x < a[m]){
            res = m;
            r = m - 1;
        }
        else    l = m + 1;
    }
    return res;
}


int main(){
    int n, x; cin >> n >> x;
    int a[n];
    nhap(a, n);
    cout << Binary_Search1(a, n, x) << endl;
    cout << Binary_Search2(a, n, x) << endl;
    cout << Binary_Search3(a, n, x) << endl;
    cout << Binary_Search4(a, n, x) << endl;
    if(Binary_Search1(a, n, x) != -1){
        cout << Binary_Search2(a, n, x) - Binary_Search1(a, n, x) + 1;
    }
    else cout << 0;
}