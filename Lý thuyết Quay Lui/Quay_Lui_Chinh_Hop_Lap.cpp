#include<iostream>
using namespace std;
int n, k, x[10001];

void in() {
	for (int i = 1; i <= k; i++) {
		cout << x[i] << " ";
	}
}

void Try(int i) {
	for (int j = 1; j <= n; j++) {
		x[i] = j;
		if (i == k) {
			in();
			cout << endl;
		}
		else Try(i + 1);
	}
}
int main() {
	cin >> n >> k;
	Try(1);
}