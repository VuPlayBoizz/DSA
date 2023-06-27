#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Nhap(int a[] , int n){
    for(int i = 0; i < n; i++){
       cin >> a[i] ;
    }
}

void Xuat(int a[] , int n){
    for(int i = 0; i < n; i++){
       cout << a[i] << ' ' ;
    }
}
//1
bool cmp1(int a, int b){
    return abs(a) <= abs(b);
}
//2
bool cmp2(int a, int b){
    if(abs(a) < abs(b)) return true;
    else if(abs(a) == abs(b))   return a < b;
    else    return false;
}
//3

int Tong(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    } 
   return sum;
}
bool cmp3(int a, int b){
    return(Tong(a) <= Tong(b));
}
//4
bool cmp4(int a, int b){
    if(Tong(a) == Tong(b))  return a > b;
    else    return  Tong(a) < Tong(b);
}
//5
bool cmp5(int a, int b){
    return (abs(a) % 2 == 0 && abs(b) % 2 == 1);
}
//6
bool cmp6(int a, int b){
    if(abs(a) % 2 == 0 && abs(b) % 2 == 1)  return true;
    else if(abs(a) % 2 == 1 && abs(b) % 2 == 0) return false;
    else if(abs(a) % 2 == 0 && abs(b) % 2 == 0) return a > b;
    else return a < b;
}

int main(){
    int n ; cin >> n ;
    int a[n];
    Nhap(a, n);
    sort(a, a + n, cmp1);   Xuat(a, n);
    cout << endl;
    sort(a, a + n, cmp2);   Xuat(a, n);
    cout << endl;
    sort(a, a + n, cmp3);   Xuat(a, n);
    cout << endl;
    sort(a, a + n, cmp4);   Xuat(a, n);
    cout << endl;
    sort(a, a + n, cmp5);   Xuat(a, n);
    cout << endl;
    sort(a, a + n, cmp6);   Xuat(a, n);
}