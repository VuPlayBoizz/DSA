#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool Check(int a[], int n, int tmp){
    while(tmp < n ){
        if(a[tmp] >= a[tmp + 1]) return false;
        else return Check(a, n, tmp + 1);
    }
    return true;
}
int main(){
    int n ; cin >> n ;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(Check(a, n , 0)) cout << "YES";
    else    cout << "NO";
}