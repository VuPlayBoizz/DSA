// Sinh to hop khong xet tinh thu tu va sap xep tang dan

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, k, a[10001], ok;
// Xay dung cau hinh dau tien
//while(<chua phai cau hinh cuoi>)
// {
//     <in ra cau hinh hien tai>
//     <in ra cau hinh ke tiep>
// }

void khoi_Tao(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}

void Sinh(){
    // bat dau tu bit thu k kiem tra xe ptu o a[i] == n - k + i hay chua
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    // a[i] != n - k + 1 => a[i]++ tat ca cac ptu vi tri i + 1 deu tang dan a[i]
    if(i == 0)  ok = 1;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    cin >> n >> k;
    ok = 0;
    khoi_Tao();
    while(ok == 0){
        for(int i = 1; i <= k; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
        Sinh();
    }
}