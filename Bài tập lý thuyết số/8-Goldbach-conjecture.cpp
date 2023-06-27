#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)  return false;
    }
    return n > 1;
}
int main(){
    int n ; cin >> n ;
    for(int i = 2; i <= n/2; i++){
        if(check(i) && check(n-i))  cout << i << ' ' << n - i << endl;
    }
}