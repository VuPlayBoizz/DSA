#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Complete Search

/*
void Try(int i){
    < Gán các giá trị có thể cho phần tử x[i] >
    for(int j = giatri1...giatri m){
        <Kiểm tra xem có gán giá trị j cho x[i]>
        x[i] = j;
        <Kiểm tra xem i có phải phần tử cuối cùng của cấu hình hay ko>
        if(i == n){
            <Tìm được 1 cấu hình>
            In ra màn hình
        }
        else{
            Gọi đệ quy Try(i + 1);
        }
    <Back track>
    <Bỏ ghi nhận x[i] = j >        
    }
}
*/
int n , x[10001];

void In(){
    for(int i = 1; i <= n; i++){
        cout << x[i] <<' ';
    }
}

void Try(int i){
    for(int j = 0 ; j <= 1; j++){
        x[i] = j;
        if(i == n){
            In();
            cout << endl;
        }
        else{
            Try(i + 1);
        }
    }
}

int main(){
    cin >> n;
    Try(1);
}