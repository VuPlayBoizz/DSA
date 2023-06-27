#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, sum, a[10001], x[10001];
int check = 0;

void Nhap(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}
// sum: tinh xem tong cnt phan tu co bang k hay chua
// pos: chi so bat dau cua cac gia tri ma vi tri x[i] co the nhan duoc

void Try(int i, int pos){
    for(int j = pos; j <= n; j++){
        x[i] = a[j];
        sum += a[j];
        if(sum == k){
            check = 1;
            cout << "[";
            for(int l = 1; l <= i; l++){
                cout << x[l];
                if(l != i)  cout << ' ';
                else    cout << "] ";
            }
        }
        else    Try(i + 1, j + 1);
        sum -= a[j];
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        Nhap();
        Try(1,1);
        if(check == 0)  cout << -1;
        cout << endl;
        check = 0;
        sum = 0;
    }
}