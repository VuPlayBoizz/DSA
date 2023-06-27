#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)  return false;
    }
    return n > 1;
}
int main(){
    int n;    cin >> n;
    int a[n];
    int dem = 0;
    int ok = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(nt(a[i])){
            ok = 1;
            dem++;
        }
    }
    if(ok == 1) cout << dem;
    else cout << "NONE";
    
}