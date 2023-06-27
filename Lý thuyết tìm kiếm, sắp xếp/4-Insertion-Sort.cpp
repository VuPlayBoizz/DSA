#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Insertion_Sort(int a[], int n){
    int i, key, j;
    for(i = 1; i < n; i++){
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    Insertion_Sort(a, n);
    cout << endl;
}