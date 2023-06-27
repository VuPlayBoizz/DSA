#include<bits/stdc++.h>
#define ll long long
using namespace std;

char c;
vector<string> v;

bool check(int a[],int n){
    for(int i = 0;i < n-1;i++){
        if(abs(a[i] - a[i+1]) == 1)return false;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0;i < n;i++){
            a[i] = i+1;
        }
        do{
            if(check(a,n) == true){
                for(int x : a){
                    cout << x;
                }
                cout << endl;
            }
        }
        while(next_permutation(a+0,a+n));
    }
    return 0;
}

