#include <bits/stdc++.h>
using namespace std;

int n, a[10][10], x[100], cot[100], d1[100], d2[100];
long long res;

void ktao(){
	memset(cot,0,sizeof(cot));
	memset(d1,0,sizeof(d1));
	memset(d2,0,sizeof(d2));
}

void Try(int i){
	for(int j = 1;j <= n;j++){
		if(cot[j] == 0 && d1[i-j+n] == 0 && d2[i+j-1] == 0){
			x[i] = j;//con hau hang thu i nam o cot j;
			cot[j] = 1;
			d1[i-j+n] =1;
			d2[i+j-1] =1;
			if(i == n){
				long long sum = 0;
				for(int k = 1;k <= n;k++){
					sum += a[k][x[k]];
				}
			    res = max(res,sum);
			}
			Try(i+1);
			cot[j] = 0;
			d1[i-j+n] = 0;
			d2[i+j-1] = 0;
		}
	}
}
int main() {
	int t; cin >> t;
	while(t--){
		n = 8;
		for(int i = 1;i <= 8;i++){
			for(int j = 1;j <= 8;j++){
				cin >> a[i][j];
			}
		}
		res = 0;
		ktao();
		Try(1);
		cout << res<< endl;
	}
}
