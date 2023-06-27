#include<bits/stdc++.h>
using namespace std;
#define ll long long

int k, n, m, ok; 
char a[100][100];
set<string> dic;
string s;
vector<string> v;
int visited[100][100];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void Try(int i, int j){
    if(dic.count(s) != 0){
        ok = 1;
        v.push_back(s);
    }   
    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && visited[i1][j1] == 0){
            s += a[i1][j1];
            visited[i1][j1] = 1;// o nay da duoc tham
            Try(i1, j1);
            // backtrack
            visited[i1][j1] = 0;
            s.pop_back();
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> k >> n >> m;
        ok = 0;
        for(int i = 1; i <= k ; i++){
            string tu;  cin >> tu;
            dic.insert(tu);
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                s = "";
                s += a[i][j];
                Try(i,j);
            }
        }
        if(ok == 0) cout << -1;
        else{
            sort(v.begin(), v.end());
            for(auto x : v) cout << x << ' ';
        }
        cout << endl;
        v.clear();
        dic.clear();
    }
}