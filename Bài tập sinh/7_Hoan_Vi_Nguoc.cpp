#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, ok, a[10001];

void khoiTao(){
    for(int i = 1; i <= n; i++){
        a[i] = n - i + 1;
    }
}

void Sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] < a[i + 1]){
        i--;
    }
    if(i == 0)  ok = 1;
    else{
        int j = n;
        while(a[i] < a[j]){
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = 0;
        khoiTao();
        while(ok == 0){
            for(int i = 1; i <= n; i++) cout << a[i];
            cout << ' ';  
            Sinh();     
        }
        cout << endl;
    }

}