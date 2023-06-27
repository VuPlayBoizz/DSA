//(A / B) % C = ((A % C)*((B^-1) % C)) % C;
//(B * (B^-1) % M) = 1 = (A * B) % M ;
// Điều kiện cần và đủ gcd(A,M) = 1;
// => Ax + My = 1;
// B^-1 là nghịch đảo module của B với module M;
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int x, y , g;
void Euclid(int a , int b){
    if( b == 0){
        x = 1 ;
        y = 0 ;
        g = a ;
    }
    else{
        Euclid(b , a % b);
        int tmp = x ;
        x = y ;
        y = tmp - a / b * y;
    }
}
//B * (B^-1) % M)
int modular_inverse(int b, int m){
    Euclid(b, m);
    return (x % m + m) % m;
}
int main(){
    int a, b, m;
    cin >> a >> b >> m;
    cout << ((a % m) * modular_inverse(b, m)) % m;//((A % C)*((B^-1) % C)) % C

}