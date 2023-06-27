#include<bits/stdc++.h>
using namespace std;
#define ll long long
int prime[10000001];
void Sang(){
    for(int i = 0; i <= 10000000; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(10000000); i++){
        if(prime[i]){
            for(int j = i * i; j <= 10000000; j += i){
                prime[j] = 0;
            }
        }
    }
}
int main(){
    int n ; cin >> n ;
    Sang();
    for(int i = 1; i <= n; i++){
        if(prime[i])    cout << i << ' ';
    }
}