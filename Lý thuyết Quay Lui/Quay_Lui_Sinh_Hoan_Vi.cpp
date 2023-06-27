#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, x[10001];
int visited[100001] = {0};

void In(){
    for(int i = 1; i <= n; i++){
        cout << x[i] << ' ';
    }
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(visited[j] == 0){
            x[i] = j;
            visited[j] = 1;
            if(i == n){
                In();   cout << endl;
            }
            else{
                Try(i + 1);    
            } 
            visited[j] = 0;             
        }

    }
}
int main(){
    cin >> n;
    Try(1);
}