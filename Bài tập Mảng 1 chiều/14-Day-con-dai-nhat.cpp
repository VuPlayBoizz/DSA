#include <bits/stdc++.h>
using namespace std;

const int mod =(int)1e9+7;

int sum(int a[], int idx, int max){
	int sum = 0;
	for(int i = 0; i < max; i++){
		sum += a[i + idx];
	}
	return sum;
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int cnt = 1;
	int max = (int)-1e9+7; //luu do dai cua day con lon nhat
	int idx = -1;
	int sum1=0;
	for(int i = 1; i < n; i++){
		if(a[i] != a[i-1]) ++cnt;
		else cnt = 1;
		if(cnt > max){
			max = cnt;
			idx = i - max + 1;
			sum1 = sum(a, idx, max);
		}
		else if(cnt == max){
			if(sum(a, i - max + 1, max) > sum1){
				idx = i - max + 1;
			}
		}
	}
	cout << max << endl;
	for(int i = 0; i < max; i++) cout << a[i+idx] << " ";
}