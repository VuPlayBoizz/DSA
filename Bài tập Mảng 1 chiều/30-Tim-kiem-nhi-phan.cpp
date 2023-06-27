#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 
}

bool binarySearch(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x)   return true;
        else if(a[m] < x){
            l = m + 1;
        }
        else    r = m - 1;
    }
    return false;
}
int main(){
    int n ; cin >> n ;
    int a[n];
    Nhap(a, n);
    sort(a, a + n);
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if(binarySearch(a, n, x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
/* Tim kiem vi tri dau va vi tri cuoi
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int first(int a[], int n, int x){
    int l = 0, r = n - 1;
    int res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            res = m;
            r = m - 1;
        }
        else if(a[m] < x){
            l = m + 1;
        }
        else    r = m - 1;
    }
    return res;
}

int last(int a[], int n, int x){
    int l = 0, r = n - 1;
    int res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            res = m;
            l = m + 1;
        }
        else if(a[m] < x)   l = m + 1;
        else    r = m - 1;
    }
    return res;
}
int main(){
    int n, x; cin >> n >> x ;
    int a[n];
    Nhap(a, n);
    //sort(a, a + n);
    cout << first(a, n, x) << ' ' << last(a, n ,x);
}
*/