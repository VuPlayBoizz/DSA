#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string a, b; getline(cin, a); getline(cin, b);
    int Start = 0;
    for(int i = 0; i < a.size(); i++){
            if(b[Start] == a[i]){
                Start++;
                if(Start + 1 == b.size()){
                    cout << "YES";
                    return 0;
                }
            }
            else    Start = 0;
    }
    cout << "NO";
}
