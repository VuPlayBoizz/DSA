#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; getline(cin, s);
    int chuCai = 0, chuSo = 0, kiTu = 0;
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i]))   chuCai ++;
        else if(isdigit(s[i]))  chuSo ++;
    }
    cout << chuCai << ' ' << chuSo << ' ' << s.size() - chuCai - chuSo;
}