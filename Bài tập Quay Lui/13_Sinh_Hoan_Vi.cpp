#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, x[10001];
int visited[100001] = {0};

void In(){
    for(int i = 1; i <= n; i++){
        cout << x[i];
    }
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(visited[j] == 0){
            x[i] = j;
            visited[j] = 1;
            if(i == n){
                In();   cout << " ";
            }
            else{
                Try(i + 1);    
            } 
            visited[j] = 0;             
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);  
        cout << endl;
        x[10001] = {0};
        visited[100001] = {0};      
    }
}