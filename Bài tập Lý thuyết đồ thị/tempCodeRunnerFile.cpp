#include<bits/stdc++.h>
using namespace std;
#define ll long long

int a[1001][1001];
// danh sach ke: mang cac vector
vector<int> ke[1000];
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1){
                ke[i].push_back(j);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << i << " : ";
        for(int x : ke[i]){
            cout << x << ' ';
        }
        cout << endl;
    }

}