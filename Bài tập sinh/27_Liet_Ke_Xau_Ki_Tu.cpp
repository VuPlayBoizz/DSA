#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, ok, b[10001];
string s;
char c, a[10001];

void kTao(){
    for(int i = 1; i <= k ; i++){
        a[i] = 'A';
    }
}

void Sinh(){
    int i = k;
    while(i >= 1 && a[i] == c){
        i--;
    }
    if(i == 0)  ok = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[i];
        }
    }
}

int main(){
    cin >> c >> k;
    kTao();
    ok = 1;
    while(ok == 1){
        for(int i = 1; i <= k; i++){
            cout << a[i];
        }
        cout << endl;
        Sinh();
    }  
}