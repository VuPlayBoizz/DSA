#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	stringstream ss(s);
	vector<string> v;
	map<string, int> mp;
	string tmp;
	while (ss >> tmp) v.push_back(tmp);
	for (int i = 0; i < v.size(); i++)
	{
		mp[v[i]] ++;
	}
    for(auto x : mp){
        cout << x.first << ' ';
    }
    cout << endl;
    for(auto x : v){
        if(mp[x] != 0){
            cout << x << ' ';
            mp[x] = 0;
        }  
    }
}