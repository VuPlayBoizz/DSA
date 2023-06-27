#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Merge(int a[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(int i = 0; i < n1; i++){
        L[i] = a[l + 1];
    }
    for(int j = 0; j < n2; j++){
        R[j] = a[m + 1 + j];
    }
    int i = 0, j = 0, k = 1;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(j < n2){
        a[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int a[], int l, int r){
    if(l < r){
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        Merge(a, l, m, r);
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    mergeSort(a, 0, n - 1);
    for(int i = 0; i < n; i++)  cout << a[i] << ' ';
    cout << endl;
}