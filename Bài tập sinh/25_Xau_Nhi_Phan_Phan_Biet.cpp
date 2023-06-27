#include <bits/stdc++.h>
#define ll long long
const int module = (int)1e9 + 7;
const int max1 = (int)1e7;
using namespace std;
// int cnt[10000001] = {0};
int p[max1 + 1];
ll ok, a[1001], b[1001], res = 1e9, n, k;
int dem;
string s;
map<int, int> mp;
set<int> se;
vector<string> v;
void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        --i;
    }
    if (i == -1)
        ok = 1;
    else
        s[i] = '1';
}
bool check2(){
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == s[i + 1])
            return false;
    }
    return true;
}
int main()
{
    cin >> n;
    s = string(n, '0');
    ok = 0;
    while (ok == 0){
        if (check2()){
            for (int i = 0; i < s.size(); ++i)
            {
                cout << s[i];
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}
