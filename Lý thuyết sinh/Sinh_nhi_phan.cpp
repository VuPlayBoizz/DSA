#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, a[10001],ok = 0;
//B1:  Xay dung cau hinh dau tien
// while(<chua phai cau hinh cuoi>){
    //<in ra cau hinh hien tai>
    // <sinh ra cau hinh tiep theo>
//}
// Ung dung: sinh ra cac tap hop con cua 1 day so
void khoi_Tao(){
    for(int i = 1; i <= n; i++){// khoi tao n bit bang 0
        a[i] = 0;
    }
}

void Sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0)  ok = 1;// da xay dung den cau hinh cuoi
    else{
        a[i] = 1;
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