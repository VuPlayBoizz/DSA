#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[100];
int x[100];
int check = 0;

void Nhap(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
}

void Try(int sum, int cnt, int pos){
    for(int i = 1; i <= n; i++){
        if(sum + a[i] <= k){
            sum += a[i];
            x[cnt] = a[i];
            if(sum == k){
                check = 1;
                cout << "[";
                for(int j = 1; j <= cnt; j++){
                    if(j == cnt)    cout << x[j] << "] ";
                    else    cout << x[j] << ' ';
                }
                return;
            }
            else    Try(sum, cnt , i+ 1);
            sum -= a[i];            
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        Nhap();
        Try(0,1,1);
        if(check == 0)  cout << -1;
        cout << endl;
        x[100] = {0};
        check = 0;
    }

}