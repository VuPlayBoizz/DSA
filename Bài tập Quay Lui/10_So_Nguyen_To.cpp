#include<bits/stdc++.h>
using namespace std;
#define ll long long
int prime[300];
vector<int> v;
int n, p, s;
void Sang(){
    for(int i = 0; i < 300; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <300; i++){
        if(prime[i] == 1){
            v.push_back(i);
            for(int j = i * i; j < 300; j++){
                prime[j] = 1;
            }
        }
    }
}

int main(){
    int t; cin >> t;
    Sang();
    while(t--){
        cin >> n >> p >> s;
        v.clear();
    }
}