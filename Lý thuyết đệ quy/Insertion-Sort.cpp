#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Insertion_Sort(int a[], int n){
    if(n <= 1)  return;
    Insertion_Sort(a, n - 1);
    int key = a[n - 1];
    int j = n - 2;
    while(j >= 0 && a[j] > key){
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = key;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    Insertion_Sort(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
}