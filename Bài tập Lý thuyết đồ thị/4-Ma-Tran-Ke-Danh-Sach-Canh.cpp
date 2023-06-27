#include<bits/stdc++.h>
using namespace std;
#define ll long long

int a[1001][1001];
vector<pair<int, int>> v;
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1 && i < j){
                v.push_back({i, j});
            }
        }
    }
    for(pair<int, int> x : v){
        cout << x.first <<' ' << x.second << endl;
    }  
}