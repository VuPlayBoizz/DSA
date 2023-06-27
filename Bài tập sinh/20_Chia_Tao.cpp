#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long n, ans = 1e9, k, a[1001], ok;
string s;

void sinh(){
	int i = s.size()-1;
	while(i >= 0 && s[i] == '1'){
		s[i] = '0';
		i--;
	}
	if(i == -1)ok = 1;//xay dung den cau hinh cuoi
	else s[i] = '1';
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++)cin >> a[i];
	s = string(n,'0');
	sinh();// bỏ qua cấu hình đầu
	ok = 0;
	while(ok == 0){
		long long sum1 = 0, sum2 = 0;
		for(int i = 0;i < n;i++){
			if(s[i] == '0')sum1 += a[i];
			else sum2 += a[i];
		}
		ans = min(ans, abs(sum1-sum2));
		sinh();
	}
	cout << ans;
    return 0;
}
