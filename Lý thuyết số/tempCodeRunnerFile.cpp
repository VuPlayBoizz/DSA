#include<bits/stdc++.h>
using namespace std;
#define ll long long

// 2 cách làm : 1 dùng theo định nghĩa , cách 2 nhanh hơn nhưng nó duyệt được 10^7
// viết hàm con có 2 loại: hàm trả về giá trị(bool , int , long long, string) còn hàm ko trả về (void)
// cú pháp : kiểu dữ liệu tên hàm(kiểu dữ liệu truyền vào tham số)
// đối với tìm số nguyên tố hay tìm ước thì duyệt từ 2-> căn n;

int nt(int n){// Kiểm tra số nguyên tố.
    for(int i = 2; i <= sqrt(n) ; i++){
        if(n % i == 0)  return 0;
    }
    return n > 1;
}
// ví dụ 123 tách 1 và 2 và 3
bool chuSo(int n){
    while(n){
        int tmp = n % 10;
        if(tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7)    return false;
        n /= 10;
    }
    return true;
}

bool tongSo(int n){
    int sum = 0;
    while(n){
        int res = n % 10;// 123 res = 3, res = 2, res = 1;
        sum = sum + res; // sum 3, sum 5, sum 6;
        n /= 10;// n = 12, n= 1, n = 0;
    }
    if(nt(sum)) return true;
    else    return false;
}

int main(){
    int a, b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++){
        if(chuSo(i) && tongSo(i) && nt(i)){
            dem ++;
        }
    }
    cout << dem;
}