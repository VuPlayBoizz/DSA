#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[10001], ok;

void khoiTao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void Sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0)  ok = 1;
    else    a[i] = 1;

}

int main(){
    cin >> n >> k;
    vector<string> v;
    ok = 0;
    khoiTao();
    while(ok == 0){
        string tmp = "";
        int cnt1 = 0;// Kiem tra xem thu co bao nhieu ptu A lien tiep
        int cnt2 = 0;// dem xem co bao nhieu day con co K phan tu A
        int check = 1;// Ktra xem lieu cau hinh do co dung K bit A hay ko
        for(int i = 1; i <= n; i++){
            if(a[i] == 1)   tmp +='B';
            else    tmp += "A";
            if(a[i] == 0) cnt1++;
            else    cnt1 = 0;
            if(cnt1 == k)   cnt2++;
            else if(cnt1 > k)    check = 0;
        }
        if(cnt2 == 1 && check == 1) v.push_back(tmp);
        Sinh();
    }
    cout << v.size() << endl;
    for(auto x : v) cout << x << endl;
}
//
#include <bits/stdc++.h>

using namespace std;

int n, a[1001], kt, cnt, k;
void Setup(){
    for(int i = 1; i <= n; ++i) a[i] = 0;
}
void Gen(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0) kt = 0;
    else a[i] = 1;

}
bool check(){
    int dem = 0, res = 0;
    for(int i = 1; i <= n; ++i){
        if(a[i] == 0) dem++;
        else dem = 0;
        if(dem > k) return false;
        if(dem == k) ++res;
    }
    return res == 1;
}
int main()
{

        cin >>n >>k;
        vector<vector<int>> v;
        Setup();
        kt = 1;
        while(kt){
            if(check()){
                vector<int> tmp(a + 1, a + n +1);
                v.push_back(tmp);
            }
            Gen();
        }
        cout <<v.size()<<'\n';
        for(auto i : v){
            for(int x : i){
                if(x == 1) cout <<"B";
                else cout <<"A";
            }
            cout <<'\n';
        }


   return 0;
}