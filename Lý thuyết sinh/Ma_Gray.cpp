#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Thuât toán chuyển từ nhị phân sang gray
// bit đầu tiên của mã gray và nhị phân là giống nhau
// các bit còn lại ở vị trí i của ma gray có được bằng XOR 2 bit thứ i-1 và i của nhị phân





string s;
void SinhGray(){
    cout << s[0];
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1])    cout << 0;
        else    cout << 1;
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        SinhGray();
    }
}

//Thuật toán chuyển từ gray sang nhị phân
// bit đầu tiên của mã gray và nhị phân giống nhau
// Các bit còn lại:
//- Nếu bit thứ i của gray = 0 thì bit thứ i của nhị phân sẽ copy bit thứ i - 1 của nhị phân
//- Ngược lại, thì bit thứ i mã nhị phân sẽ là lật ngược bit thứ i-1 của nhị phân
int n, cnt, ok;
string s, a;
void SinhNhiPhan(){
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
		SinhNhiPhan();
	}
    return 0;
}
