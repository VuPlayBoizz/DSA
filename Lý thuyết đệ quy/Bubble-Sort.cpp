#include <bits/stdc++.h>
using namespace std;
 
void bubbleSort(int arr[], int n)
{
    if (n == 1){
        return;
    }

    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }
    bubbleSort(arr, n-1);
}
 

void printArray(int arr[], int n)
{
    for (int i=0; i < n; i++){
        cout << arr[i] << ' ';
    }

}

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bubbleSort(a, n);
    printArray(a, n);
}