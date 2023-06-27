#include<bits/stdc++.h>
using namespace std;
int Lietke(int n){
    for(int i = 2; i <= sqrt(n); i++){
        int dem = 0;
        while(n % i == 0){
            dem ++;
            n /= i;
        }
        if(dem >= 2 )    return 1;
    }
    return 0;
}
int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a ; i<=b;i++){
        if(lietke(i))   cout << i << " ";
    }
}