#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    int cnt = 0;
    string tmp;
    while(ss >> tmp){
        cnt++;
    }
    cout << cnt;
}