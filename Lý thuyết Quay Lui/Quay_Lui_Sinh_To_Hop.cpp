#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n,k, x[10001];

void In(){
    for(int i = 1; i <= k; i++){
        cout << x[i] << ' ';
    }
}

void Try(int i){
    for(int j = x[i - 1] + 1; j <= n - k + i; j++){
        x[i] = j;
        if(i == k){
            In();   cout << endl;
        }
        else    Try(i + 1);
    }
}
int main(){
    cin >> n >> k;
    x[0] = 0;
    Try(1);
}