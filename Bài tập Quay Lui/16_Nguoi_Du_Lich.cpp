#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[100], x[100], c[100][100], cmin = 1e9, ok, s, toiuu = 1e9+1;
bool visited[100];

void Try(int i){
    for(int j = 2;j <= n;j++){
        if(!visited[j]){
            visited[j] = true;
            x[i] = j;//thanh pho lua chon di tu i la tp j
            s += c[x[i]][x[i-1]];
            if(i == n){
                toiuu = min(toiuu,s + c[x[n]][1]);
            }
            else if(s + cmin * (n-i+1) < toiuu){//nhanh can
                Try(i+1);
            }
            visited[j] = false;
            s -= c[x[i]][x[i-1]];
        }
    }
}

int main(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> c[i][j];
            if(c[i][j] != 0){
                cmin = min(cmin,c[i][j]);//chi phi thap nhat tu thanh pho i toi tp j
            }
        }
    }
    x[1] = 1;
    Try(2);
    cout << toiuu;
}