#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[100], x[100], ok, s;
bool visited[100];

void Try(int i){
    if(ok == 1)return;
    for(int j = x[i-1]+1;j <= n-k+1;j++){
        x[i] = j;
        if(i == k){
            int sum = 0;
            for(int l = 1;l <= k;l++){
                sum += a[x[l]];
            }
            if(sum == s){
                ok = 1;
            }
        }
        else {
            Try(i+1);
        }
    }
}
void inp(){
    cin >> n >> s;
    ok = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1,a + n + 1, greater<int>());

    for(int i = 1; i <= n; i++){
        k = i;
        Try(1);
        if(ok == 1){
            cout << i << endl;
            return;
        }
    }
    cout << "-1\n";
}

int main(){
    int t;cin >> t;
    while(t--){
        inp();
    }
}