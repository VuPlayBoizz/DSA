#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long c[1001][1001];

void Pascal(){
    for(int i = 0; i < 1001; i++){
        for(int j = 0; j <= 1001 ; j++){
            if(i == j || j == 0)    c[i][j] = 1;
            else{
                c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
                c[i][j] %= 1000000007;
            }    
        }
    }
}
int main(){
    Pascal();
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
}