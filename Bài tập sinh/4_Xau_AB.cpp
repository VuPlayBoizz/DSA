#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[10001], ok;

void khoiTao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void Sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0)  ok = 1;
    else    a[i] = 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = 0;
        while(ok == 0){
            for(int i = 1; i <= n; i++){
                if(a[i] == 0)   cout << 'A';
                else    cout << 'B';
            }
            cout << ' ';
            Sinh(); 
        }
        cout << endl;
    }    
}