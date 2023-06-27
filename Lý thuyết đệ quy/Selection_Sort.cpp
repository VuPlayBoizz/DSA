#include<bits/stdc++.h>
using namespace std;
#define ll long long

int minIndex(int a[], int i, int j){
    if(i == j)  return i;
    int k = minIndex(a, i + 1, j);
    return (a[i] < a[k]) ? i : k;
}

void Selection_Sort(int a[], int n, int idx = 0){
    if(idx == n)    return;
    int k = minIndex(a, idx, n-1);
    if(k != idx)    swap(a[k], a[idx]);
    Selection_Sort(a, n, idx + 1);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    Selection_Sort(a, n);
    for(int i = 0; i < n; i++)  cout << a[i] << ' ';
    cout << endl;
}