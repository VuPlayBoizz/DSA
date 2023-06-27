#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];

    for(int i = 0; i < n; i++)  cin >> a[i];
    for(int j = 0; j < m; j++)  cin >> b[j];
    sort(a, a + n);
    sort(b, b + m);
    int cnt = 0;
    int i = 0, j = 0;    
    while(i <= n - 1 && j <= n - 1){
        if(a[i] > b[j]){
            cnt++;
            i++; j++;
        }
        else{
            i++;
        }
    }
    cout << cnt;
}