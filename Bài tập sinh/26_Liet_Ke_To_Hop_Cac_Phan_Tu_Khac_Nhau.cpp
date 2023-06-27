#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, ok, a[10001], b[10001];
string s;
vector<string> v;

void ktao(){
    for(int i = 1;i <= k;i++){
        a[i] = i;
    }
}
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n-k+i){
        i--;
    }
    if(i == 0)ok = 0;
    else {
        a[i]++;
        for(int j = i+1;j <= k;j++){
            a[j] = a[j-1]+1;
        }
    }
}
int main(){
    cin >> n >> k;
    set<int> se;
    for(int i = 1;i <= n;i++){
        int x; cin >> x;
        se.insert(x);
    }
    n = se.size();
    vector<int> v;
    for(int x : se)v.push_back(x);
    ktao();
    ok = 1;
    while(ok == 1){
        for(int i = 1;i <= k;i++){
            cout << v[a[i]-1] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}
