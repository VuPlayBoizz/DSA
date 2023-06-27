#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, a[100][100];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void Nhap(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j){
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 1){
            a[i1][j1] = 0;
            Try(i1,j1);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        Nhap();
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j] == 1){
                    Try(i,j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;    
    }
}
//
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m,  a[100][100];

void Nhap(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j){
    a[i][j] = 0;
    if(i + 1 <= n && a[i + 1][j] ){
        a[i + 1][j] = 0;
        Try(i + 1, j);
    }

    if(j - 1 >= 1 && j - 1 <= n && a[i][j - 1]){
        a[i][j - 1] = 0;
        Try(i, j - 1);
    }

    if(j + 1 <= n && a[i][j + 1]){
        a[i][j + 1] = 0;
        Try(i, j + 1);
    }

    if(i - 1 >= 1 && i - 1 <= n && a[i - 1][j]){
        a[i - 1][j] = 0;
        Try(i - 1, j);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        Nhap();
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j] == 1){
                    Try(i,j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}