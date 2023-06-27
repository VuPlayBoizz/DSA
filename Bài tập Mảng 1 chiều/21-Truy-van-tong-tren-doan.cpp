#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
ll prefix[10000001];
void Nhap(int a[], int n){
   for(int i = 0 ; i < n ; i++){
      cin >> a[i];
   }
}

int main(){
    int n ; cin >> n ;
    Nhap(a,n);
    for(int i = 0 ; i < n ; i++){
        if(i == 0)  prefix[0] = a[0];
        else prefix[i] = prefix[i-1] + a[i];
    }
    int q ; cin >> q;
    while(q--){
        int l , r ; cin >> l >> r ;
        --l;
        --r;
        if(l == 0)  cout << prefix[r];
        else    cout << prefix[r] - prefix[l-1];
        cout << endl;
    }
}