#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Selection_Sort(int a[], int n){
    int i, j, Min;
    for(i = 0; i < n - 1; i++){
        Min = i;
        for(j = i + 1; j < n; j++){
            if(a[j] < a[Min]){
                Min = j;
            }
        }
        if(Min != i){
            swap(a[Min], a[i]);
        }
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    Selection_Sort(a, n);
    for(int i = 0; i < n; i++)  cout << a[i] << ' ';
    cout << endl;
}