#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n ; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a + n);
    int l = 0, r = n - 1;
    while(l <= r){
        if(l != r)  cout << a[r] << ' ' << a[l] << ' ';
        else    cout << a[r];
        l++;
        r--;
    }
}