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
int main(){
    int a , b;
    cin >> a >> b;
    Euclid(a,b);
    cout << x << ' ' << y ;
}