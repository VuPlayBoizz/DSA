#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool Check(int a[], int n, int l, int r){
    while(l <= r){
        if(a[l] != a[r])    return false;
        else return Check(a, n, l + 1, r - 1);// chú ý cộng trc cộng sau
    }
    return true;
}
int main(){
    int n ; cin >> n ;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(Check(a, n , 0 , n - 1)) cout << "YES";
    else    cout << "NO";
}