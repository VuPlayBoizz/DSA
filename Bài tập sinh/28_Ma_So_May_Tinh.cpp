#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, ok,b[10001];
string s;
char c, a[10001];
vector<string> v;

void ktao(){
    for(int i =  1;i <= n;i++){
        a[i] = 1;
    }
}
// Chỉnh hợp lặp
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == n){
        i--;
    }
    if(i == 0)ok = 0;
    else {
        a[i]++;
        for(int j = i+1;j <= n;j++){
            a[j] = 1;
        }
    }
}
int main(){
    cin >> n;
    s = "";
    for(int i = 1;i <= n;i++){
        s += 'A' + i - 1;
    }
    vector<string> hoanVi;
    do{
        hoanVi.push_back(s);
    }
    while(next_permutation(s.begin(),s.end()));
    vector<string> chinhHop;
    ok = 1;
    ktao();
    while(ok == 1){
        string tmp = "";
        for(int i = 1;i <= n;i++){
            tmp += to_string(a[i]);
        }
        chinhHop.push_back(tmp);
        sinh();
    }
    for(string x : hoanVi){
        for(string y : chinhHop){
            cout << x << y << endl;
        }
    }
    return 0;
}
