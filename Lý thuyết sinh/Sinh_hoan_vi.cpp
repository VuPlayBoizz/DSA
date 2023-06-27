// Sinh hoan vi
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, a[10001], ok;
void khoi_Tao(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void Sinh(){
    // bat dau tu bit thu n, kiem tra xem a[i] > a[i + 1]???
    //a[i] > a[i + 1] => dich sang trai
    // a[i] < a[i + 1] => Tim ptu tu vi tri thu n lon hon a[i] ma la nho nhat
    // doi cho a[i], a[j]
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        i--;
    }
    if(i == 0)  ok = 1;
    else{
        int j = n;
        while(a[i] > a[j]){
            j--;
        }
        swap(a[i], a[j]);
        sort(a + i + 1, a + n + 1);
    }
}

int main(){
    cin >> n;
    ok = 0;
    khoi_Tao();
    while(ok == 0){
        for(int i = 1; i <= n; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
        Sinh();
    }

}