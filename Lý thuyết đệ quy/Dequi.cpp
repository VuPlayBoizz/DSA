// Đệ qui hôạt động theo bộ nhớ stack
// hoạt động LIFO
#include<bits/stdc++.h>
using namespace std;

void xuoi(long long n){
    if(n < 10){
        cout << n << ' ';
        return;
    }  
    else{
        xuoi(n / 10);
        cout << n % 10 << ' ';
    }
}

void dao(long long n){
    if(n < 10){
        cout << n << ' ';
        return;
    }
    else{
        cout << n % 10 << ' ';
        dao(n / 10);
    }
}

int main(){
    long long n; cin >> n;
    xuoi(n);
    cout << endl;
    dao(n);
}
