#include<bits/stdc++.h>
using namespace std;
#define ll long long
int prime[1000001];
void Sang(){
    for(int i = 0; i <1000000; i++){
        prime[i] = i;
    }
    prime[0] = prime[1] = 1;
    for(int i = 2; i < 1000; i++){
        if(prime[i] == i){
            for(int j = i*i; j <1000000; j+=i){
                if(prime[j] == j)   prime[j] = i;
            }
        }
    }
}
int main(){
    int n; cin >> n;
    cout << prime[n];
}