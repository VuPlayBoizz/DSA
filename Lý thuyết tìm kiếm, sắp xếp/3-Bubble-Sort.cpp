#include<bits/stdc++.h>
using namespace std;
#define ll long long

void BubbleSort(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }
    return;
}
void Xuat(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }

}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    BubbleSort(a, n);
    Xuat(a, n);
}