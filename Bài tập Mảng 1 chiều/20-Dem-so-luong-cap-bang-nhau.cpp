#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n; cin>>n;
    int a[n];
    long lon x = 1, kq = 0;
    for (int i = 0; i < n; i ++) 
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i ++){
        if (a[i] == a[i + 1])  x ++; 
        else 
        {
            kq += x * (x - 1) / 2;
            x = 1;
        }
    }
    cout << kq;
} 