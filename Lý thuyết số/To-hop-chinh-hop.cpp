#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll nCk(int n, int k){// tổ hợp
    ll res = 1;
    for(int i = 0; i < k; i++){
        res *= (n - i);
        res /= (i + 1);// Ko áp dụng đồng dư được 
    }
    return res;
}

ll nAk(int n, int k){// chỉnh hợp. Áp dụng đồng dư được
    ll res = 1;
    for(int i = 0; i < k; i++){
        res *= (n - i);
    }
    return res;
}

int main(){
    int n, k ; cin >> n >> k ;
    cout << nCk(n, k);
    cout << nAk(n, k);
}