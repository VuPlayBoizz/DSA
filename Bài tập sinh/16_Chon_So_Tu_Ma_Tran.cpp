#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[1001], ok;

void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] >= a[i + 1]){
        i--;
    }
    if(i == 0)  ok = 1;
    else {
        int j = n;
        while(a[i] >= a[j]) j--;
        swap(a[i], a[j]);
        sort(a + i + 1, a + n + 1);
    }
}

int main(){
    cin >> n >> k;
    int mt[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> mt[i][j];
        }
    }
    for(int i = 1; i <= n; i++)a[i] = i;//cot
    vector<string> res;
    ok = 0;
    while(ok == 0){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += mt[i][a[i]];
        }
        if(sum == k){
            string ans = "";
            for(int i = 1; i <= n; i++){
                ans += to_string(a[i]);
                ans += " ";
            }
            res.push_back(ans);
        }
        sinh();
    }
    cout << res.size() << endl;
    for(string x : res){
        cout << x << endl;
    }
    return 0;
}
