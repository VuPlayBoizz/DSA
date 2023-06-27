#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, ok, a[10001],b[10001];
string s;
vector<string> v;

void ktao(){
    for(int i = 1;i <= n;i++)a[i] = 0;
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0)ok = 0;
    else a[i] = 1;
}

bool cmp(string a,string b){
    if(a.size() != b.size())return a.size() < b.size();
    else {
        if(a < b)return true;
        else return false;
    }
}
int main(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> b[i];
    }
    ktao();
    ok = 1;
    sinh();
    while(ok == 1){
        string tmp ="";
        for(int i = 1;i <= n;i++){
            if(a[i] == 1){
                tmp += to_string(b[i]) + " ";
            }
        }
        v.push_back(tmp);
        sinh();
    }
    sort(v.begin(),v.end(),cmp);
    for(string x : v){
        cout << x << "\n";
    }
    return 0;
}
