#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[10001], ok;
int cnt = 0;

void khoiTao(){
    cnt = 1;
    a[cnt] = n;
}

void Sinh(){
    int i = cnt;
    while(i >= 1 && a[i] == 1){
        i--;
    }
    if(i == 0)  ok = 1;
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        if(q != 0){
            for(int k = 1; k <= q; k++){
                cnt++;
                a[cnt] = a[i];
            }
        }
        if( r != 0){
            cnt++;
            a[cnt] = r;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = 0;
        khoiTao();
        while(ok == 0){
            cout << "(";
            for(int i = 1; i <= cnt; i++){
                if(i != cnt){
                    cout << a[i] << ' ';
                }
                else    cout << a[i];
            }
            cout << ") ";
            Sinh();
        }
        cout << endl;
    }

}