#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long n, k, a[1001], ok;
string s;
vector<string> ans;

void sinh(){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == 'H'){
		s[i] = 'A';
		i--;
	}
	if(i == -1)	ok = 1;//xay dung den cau hinh cuoi
	else s[i] = 'H';
}

bool check(string s){
	if(s[0] != 'H' || s[s.size()-1] != 'A')return false;
	for(int i = 0;i < s.size()-1;i++){
		if(s[i] == 'H' && s[i+1]=='H')return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
	    s = string(n,'A');
	    ok = 0;
	    while(ok == 0){
		   if(check(s)) cout << s << endl;
		    sinh();
	    }
	}
    return 0;
}
