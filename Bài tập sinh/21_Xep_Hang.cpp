#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long n, ans = 1e9, k, ok;
string a[1001];

void sinh(){
	int i = n-1;
	while(i >= 1 && a[i] >= a[i+1]){
		i--;
	}
	if(i == 0)ok = 1;//xay dung den cau hinh cuoi
	else {
		int j = n;
		while(a[i] >= a[j])	j--;
		swap(a[i], a[j]);
		sort(a + i + 1, a + n + 1);
	}
}

int main(){
	cin >> n;
	a[n+1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	ok = 0;
	sort(a + 1, a + n + 1);// Sắp xếp lại xâu
	while(ok == 0){
		for(int i = 1;i <= n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
		sinh();
	}
    return 0;
}
