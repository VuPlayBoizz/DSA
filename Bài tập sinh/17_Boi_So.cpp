#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long n, k, a[1001], ok;
string s;
vector<string> ans;
void sinh(){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '9'){
		s[i] = '0';
		i--;
	}
	if(i == -1) ok = 1;//xay dung den cau hinh cuoi
	else s[i] = '9';
}

int main(){
	s = "0000000000000";//ktao
	ok = 0;
	while(ok == 0){
		ans.push_back(s);
		sinh();
	}
	for(int i = 1;i <= 500;i++){
		for(string x : ans){
			if(stoll(x) % i == 0 && stoll(x) != 0){
				a[i] = stoll(x);
				break;
			}
		}
	}
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cout << a[n] << endl;
	}
    return 0;
}
