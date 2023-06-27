#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[100001];

void Sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        for(int i = 1; i <= k; i++){
            cout << i << ' ';
        }
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
        for(int i = 1; i <= k; i++){
            cout << a[i] << ' ';
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
        }
        Sinh();
        cout << endl;
    }

}