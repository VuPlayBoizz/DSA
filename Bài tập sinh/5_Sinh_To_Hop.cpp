#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, ok, a[10001];

void khoiTao(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}

void Sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0)  ok = 1;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        ok = 0;
        khoiTao();
        while(ok == 0){
            for(int i = 1; i <= k; i++) cout << a[i];
            cout << ' ';
            Sinh();
        }
        cout << endl;
    }

}