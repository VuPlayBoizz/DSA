#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int Solve(int a[], int n){
    int c25 = 0, c50 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 25)  c25++;
        else if(a[i] == 50){
            if(c25 == 0)    return 0;
            else{
                c50++;
                c25--;
            }  
        }
        else{
            if(c25 == 0 || c25 * 25 + c50 * 50 < 75)    return 0;
            if(c50 != 0){
                c50--;
                c25--;
            }
            else    c25 -= 3;
        }
    }
    return 1;
}
int main(){
    int n ; cin >> n ;
    int a[n];
    Nhap(a,n);
    if(Solve(a, n)) cout << "YES";
    else    cout << "NO";
}