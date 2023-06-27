#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k , a[10001];
set<int> s;

void Sinh(){
    int cnt = 0;
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0)  cout << k << endl;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
        for(int j = 1; j <= k ; j++){
            if(s.find(a[j]) == s.end()){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k ; i++){
            cin >> a[i];
            s.insert(a[i]);
        }    
        Sinh();
        s.clear();
    }
}