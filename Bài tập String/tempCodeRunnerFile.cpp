#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; cin >> s;
    int len = 1;
    int maxLen = 0;
    int idx = 0;
    int maxLenStart = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i + 1]){
            if(1 == len){
                idx = i;
            }
            if(++len >= maxLen){
                maxLen = len;
                maxLenStart = idx;
            }
        }
        else    len = 1;
    }
    for(int j = 0; j < maxLen; j++){
        cout << s[j + maxLenStart];
    }
}