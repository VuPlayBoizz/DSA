#include<bits/stdc++.h>
using namespace std;

int n, k, s;
int a[10001];
int cnt;

bool Check(){
    int sum = 0;
    for(int i = 1; i <= k; i++){
        sum += a[i];
    }
    if(sum == s)    return true;
    return false;
}

void Try(int i){
    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k){
            if(Check() == true){
                cnt++;
            }
        }
        else    Try(i + 1);
    }
}

int main(){
    while(cin >> n && cin >> k && cin >> s){
        Try(1);
        cout << cnt << endl;
        cnt = 0;
    }
}