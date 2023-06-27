#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, cnt, ok,b[10001];
string s;
int a[10001];
vector<string> v;

void ktao(){
    a[1] = n;
    cnt = 1;
}

void sinh(){
    int i = cnt;
    while(i >= 1 && a[i] == 1){
        i--;
    }
    if(i == 0)ok = 0;
    else {
        a[i]--;
        int thieu = cnt - i + 1;
        int g = thieu / a[i];
        int d = thieu % a[i];
        cnt = i;
        for(int j = 1; j <= g; j++){
        	++cnt;
            a[cnt] = a[i];
        }
        if(d != 0){
        	++cnt;
            a[cnt] = d;
        }
    }
}
int main(){
    cin >> n;
    ktao();
    ok = 1;
    while(ok == 1){
        for(int i = 1; i <= cnt; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}
