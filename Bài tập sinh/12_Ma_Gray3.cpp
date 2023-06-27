#include<bits/stdc++.h>
#define ll long long
using namespace std;


//thua toan chuyen tu nhi phan sang gray
//-bit dau tien cua ma gray va nhi phan giong nhau
//-cac bit con lai o vi tri i cua ma gray co duoc bang cach XOR 2 bit thu i va i-1 cua nhi phan

//thua toan chuyen tu gray sang nhi phan
//-bit dau tien cua ma gray va nhi phan giong nhau
//-cac bit con lai o vi tri i cua ma nhi phan co duoc bang cach : kiem tra ki tu thu i cua ma gray
//-neu bit thu i cua gray ma = 0 thi bit thu i cua nhi phan se copy bit thu i-1 cua nhi phan
//-nguoc lai , thi bit thu i ma nhi phan se la lat nguoc bit thu i-1 cua nhi phan
int n, cnt, ok;
string s, a;
void sinh(){
	for(int i = 1;i < s.size();i++){
		if(s[i] == '0')a[i] = a[i-1];
		else {
			if(a[i-1] == '0')a[i] = '1';
			else a[i] = '0';
		}
	}
	for(int i = 0;i < s.size();i++){
		cout << a[i];
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		a[0] = s[0];
		sinh();
	}
    return 0;
}
