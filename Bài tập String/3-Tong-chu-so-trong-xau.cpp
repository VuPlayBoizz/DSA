#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Solve(string s){
    int ans = 0;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i]))   sum = sum * 10 + s[i] - '0';
        else{
            ans += sum;
            sum = 0;
        }
    }
    cout << ans;
}
int main(){
    string s; cin >> s;
    s += "@";
    Solve(s);

}