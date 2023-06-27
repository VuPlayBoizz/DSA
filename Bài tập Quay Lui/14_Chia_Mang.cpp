#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[100], ok, s;
bool visited[100];

void Try(int sum, int cnt){
    if(cnt == k){
        ok = 1;
        return;
    }

    for(int j = 1; j <= n;j++){
        if(visited[j] != true){
            visited[j] = true;
            if(sum == s){
                Try(0,cnt+1);
            }
            else if(sum + a[j] <= s){
                Try(sum + a[j],cnt);
            }
        }
        visited[j] = false;
    }
}

void inp(){
        cin >> n >> k;
        s = 0, ok = 0;
        memset(visited,false,sizeof(visited));
        for(int i = 1;i <= n;i++){
            cin >> a[i];
            s += a[i];
        }
        if(s % k != 0){
            cout << "0\n";
            return; 
        }
        s /= k;//tinh tong cua moi tap con
        Try(0,0);
        cout << ok << endl;
}
int main(){
    int t;cin >> t;
    while(t--){
        inp();
    }
}